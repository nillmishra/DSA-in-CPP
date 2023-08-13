#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while (nums[0] != nums[nums[0]]) {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6, 6, 9};

    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }

    int duplicate = solution.findDuplicate(nums);
    cout << "\nThe duplicate number is " << duplicate << endl;
    return 0;
}
