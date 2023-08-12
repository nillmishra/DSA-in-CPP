#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution { 
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-4,6,-8,-9,3,7,-2,0,-4,-3,1};
    
    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    
    solution.sortColors(nums);
    
    cout << "\nAfter sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    
    return 0;
}
