#include <bits/stdc++.h>
using namespace std;

#define LOOP(i, start, end) for (int i = start; i < end; ++i)
#define DEBUG(x) cout << #x << ' = ' << x << endl;

int main()
{
    vector<int> nums;
    int x, n, pos = -1;
    int value;

    // vector input
    cout << "Array size: " << endl;
    cin >> n;
    cout << "Array values: " << endl;
    LOOP(i, 0, n)
    {
        cin >> value;
        nums.push_back(value);
    }

    // Sort the array (binary search works on sorted arrays)
    sort(nums.begin(), nums.end());

    int q; // query quantity
    cout << "Amount of queries: " << endl;
    cin >> q;

    LOOP(i, 0, q)
    {
        cout << "Value to be found: " << endl;
        cin >> x;

        int low = 0;
        int high = n - 1;
        int firstPos = -1;
        int lastPos = -1;

        // Find the first occurrence
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (x == nums[mid])
            {
                firstPos = mid;
                high = mid - 1; // Continue searching on the left side for the first occurrence
            }
            else if (x > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        // Reset low and high for the last occurrence search
        low = 0;
        high = n - 1;

        // Find the last occurrence
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (x == nums[mid])
            {
                lastPos = mid;
                low = mid + 1; // Continue searching on the right side for the last occurrence
            }
            else if (x > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (firstPos != -1)
        {
            cout << x << " first found at position: " << firstPos << endl;
            cout << x << " last found at position: " << lastPos << endl;
        }
        else
        {
            cout << x << " not found" << endl;
        }
    }

    return 0;
}

// ----  normal binary search ----
/*
    int x, n, pos = -1, v[10005];

    cin >> n;

    for (int i = 0; i < n; i++) { // Le os elementos de v
        cin >> v[i];
    }

    cin >> x; // Le o numero a ser buscado

    //// busca binaria ////

    int low = 0; // Começa na primeira posicao
    int high = n - 1; // Começa na ultima posicao

    while(low <= high) { // Calcula do segundo elemento em diante

        int mid = (low + high) / 2; // Media simples
        if (x == v[mid]) { // Encontrou x
            pos = mid; // Salva a posicao
            break; // Encerra a busca
        }

        if (x > v[mid]) { // Continua a busca na direita
            low = mid + 1;
        }

        if (x < v[mid]) { // Continua a busca na esquerda
            high = mid - 1;
        }
    }

    if (pos != -1) {
        cout << x << "encontrado na posicao" << pos << endl;
    }

    else {
        cout << x << "nao encontrado" << endl;
    }

*/
