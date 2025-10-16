#include <iostream>
#include <vector>
using namespace std;

int subarraysDivByK(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> prefix(n);
    prefix[0] = nums[0];

    int count = 0;

    //Step 1: Create prefix sum array
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    for(int i = 0; i < n; i++){
        cout << prefix[i] << " ";
    }

    cout<< endl;

    

    // // Step 2: Check all subarrays using prefix sums
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int subSum;
            if (i == 0)
                subSum = prefix[j];
            else
                subSum = prefix[j] - prefix[i - 1];

            if (subSum % k == 0)
                count++;
        }
    }


    //brute force
    // for (int i = 0; i < n; i++) {
    //     int sum = 0;  // reset sum for new subarray start
    //     // Inner loop for ending index
    //     for (int j = i; j < n; j++) {
    //         sum += nums[j];  // add current element
    //         if (sum % k == 0) {  // check divisibility
    //             count++;
    //         }
    //     }
    // }

    return count;
}

int main() {
    vector<int> nums = {4, 5, 0, -2, -3, 1};
    int k = 5;
    cout << subarraysDivByK(nums, k);
    return 0;
}
