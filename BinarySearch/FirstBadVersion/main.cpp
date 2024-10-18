// #include <bits/stdc++.h>                                                                 //unsolved
// using namespace std;

// #define debug(a) cout << #a << " = " << a << endl
// #define FOR for (int i = 0; i < n; i++)

// int main()
// {
//     vector<int> nums;
//     int n;     // size of vector
//     int value; // value to be inserted in the array

//     //input the array
//     cin >> n;
//     FOR
//     {
//         cin >> value;
//         nums.push_back(value);
//     }

//     cout << "Vector: ";
//     FOR
//     {
//         cout << nums[i] << " ";
//     }
//     cout << endl;


//     //binary search
//     int badVersion;
//     int leftPointer = 0;
//     int rightPointer = n;
//     int middlePointer = leftPointer + (rightPointer-leftPointer)/2;
//     int answer; 

//     cin >> badVersion;

//     while(leftPointer<rightPointer){
//         if(badVersion==middlePointer){
//             answer=middlePointer;
//             rightPointer=middlePointer;
//             break;
//         }
//         else
//         {
//             leftPointer = middlePointer + 1;
//         }
//     }
//     cout << answer << endl;

//     return 0;
// }