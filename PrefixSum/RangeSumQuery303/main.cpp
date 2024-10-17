#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums[1001];//array if number
    int preSum[1001];//array of the sum of numbers
    int n;//size of arrays
    int left, right, answer=0;//start and finish of the sum inteval and the answer od this inteval sum

    //input
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    //sum array
    for(int i=0; i<n; i++){
        preSum[0]=nums[0];
        preSum[i]=nums[i]+preSum[i-1];
    }

    //sum inteval
    cin>>left>>right;

    //sums the inteval 
    if(left==0){
        answer=preSum[right];
    } else{
        preSum[right]-preSum[left-1];
    }

    cout << endl << "Inteval sum: " << answer << endl;

    return 0;
}
