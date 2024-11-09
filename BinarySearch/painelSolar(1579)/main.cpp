#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// Function to check if we can load all panels without exceeding maxLoad per truck
bool canLoadWithMaxWeight(const vector<int>& weights, int caminhoes, int maxLoad) {
    int currentLoad = 0, trucksUsed = 1;

    for (int weight : weights) { //enhanced for
        if (currentLoad + weight > maxLoad) {
            // Use a new truck
            trucksUsed++;
            currentLoad = weight;

            // If we exceed the truck limit, this maxLoad is not feasible
            if (trucksUsed > caminhoes) return false;
        } else {
            // Continue adding to the current truck
            currentLoad += weight;
        }
    }
    return true;
}

int main() {
    int N; // number of test cases
    cin >> N;
    
    while (N--) {
        int nPaineis, caminhoes, frete;
        cin >> nPaineis >> caminhoes >> frete;

        vector<int> pesos(nPaineis);
        for (int i = 0; i < nPaineis; i++) {
            cin >> pesos[i];
        }
        
        // Binary search for the minimum possible maximum load per truck
        int left = *max_element(pesos.begin(), pesos.end());
        int right = accumulate(pesos.begin(), pesos.end(), 0);
        int minMaxLoad = right;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (canLoadWithMaxWeight(pesos, caminhoes, mid)) {
                minMaxLoad = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        // Calculate the total freight cost based on the minMaxLoad found
        int valorFrete = minMaxLoad * caminhoes * frete;

        // Output the result
        cout << minMaxLoad << " $" << valorFrete << endl;
    }

    return 0;
}
