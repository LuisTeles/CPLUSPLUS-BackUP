#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int minSubArrayLen(int target, const vector<int>& nums) {
    // Step 1: Create the prefix sum array
    int n = nums.size();
    vector<int> prefixSum(n + 1, 0); // Extra space for easier indexing

    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
    }

    // Step 2: Find the minimal length of subarray whose sum >= target
    int minLength = numeric_limits<int>::max();

    for (int start = 0; start < n; ++start) {
        for (int end = start + 1; end <= n; ++end) {
            int sum = prefixSum[end] - prefixSum[start]; // Calculate sum of subarray
            if (sum >= target) {
                minLength = min(minLength, end - start); // Update the minimal length if smaller
            }
        }
    }

    // Step 3: Return the result (0 if no valid subarray was found)
    return (minLength == numeric_limits<int>::max()) ? 0 : minLength;
}

int main() {
    vector<int> nums = {2, 3, 1, 4};
    int target = 5;
    
    int result = minSubArrayLen(target, nums);
    cout << "Minimal length of subarray with sum >= target: " << result << endl;

    return 0;
}
