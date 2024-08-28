#include <iostream>
#include <climits>
using namespace std;

int maxSubArray(int nums[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum += nums[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int maxSum = maxSubArray(nums, n);
    cout << "The maximum subarray sum is " << maxSum << endl;
    return 0;
}
