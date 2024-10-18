#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    int left=1;
    int mid;

    cin >> x;
    int right=x;

    if (x==0){
        cout << x << endl;
    }
        

    while (left <= right){
        int mid = left + (right - left)/2;

        if(mid == x/mid){
            cout << mid << endl;
            break;
        }
        else if(mid > x / mid){
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return 0;
}