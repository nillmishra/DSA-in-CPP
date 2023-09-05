#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
//binary search approach
using namespace std;

int bs(vector<int> &nums, int start, int x) {
    int end = nums.size() - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] == x) {
            return mid;
        } else if (x > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int findPairs(vector<int> &nums, int k) {
    // Sort the input vector in ascending order
    sort(nums.begin(), nums.end());
    
    // Create a set to store unique pairs
    set<pair<int, int>> ans;

    // Iterate through the sorted vector
    for (int i = 0; i < nums.size(); i++) {
        // Search for an element in the range [i+1, nums[i]+k] using binary search
        int index = bs(nums, i + 1, nums[i] + k);
        
        // If an element is found, insert the pair into the set
        if (index != -1) {
            ans.insert({nums[i], nums[index]});
        }
    }
    
    // Return the size of the set, which represents the count of unique pairs
    return ans.size();
}

int main() {
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;
    int result = findPairs(nums, k);
    cout << "Number of pairs with a difference of " << k << ": " << result << endl;
    return 0;
}
