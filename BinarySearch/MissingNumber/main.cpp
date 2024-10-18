#include <bits/stdc++.h>
using namespace std;
//return the missing number in the sequence (0 to N) on a given array 

int main()
{
    vector<int> nums;   //vector of numbers
    int n;  //size of vector
    int values;     //inputs that will be inserted in the vector

    //vector input
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> values;
        nums.push_back(values);     //insert value in to the vector
    }

    //vector output
    cout << "vector: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    // sort nums vector
    sort(nums.begin(), nums.end());

    int x;
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    //binary search algorithm
    while (start <= end)
    {
        if (start == end)
        {
            if (nums[start] == start) // Handling edge case {0,1}.
                mid = start + 1;
            else
                mid = start; // Handling edge case {0,2}.
            break;
        }
        if (nums[mid] != mid)
        {
            end = mid - 1;
            mid = start + (end - start) / 2;
        }
        else
        {
            start = mid + 1;
            mid = start + (end - start) / 2;
        }
    }

    //output
    cout << endl << mid << endl;

    return 0;
}