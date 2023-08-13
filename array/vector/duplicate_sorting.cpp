#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i <nums.size(); i++){
            if (nums[i]==nums[i+1])
            {
                cout <<"\nThe duplicate number is "<< nums[i] <<endl;
                break;
            }
        }
        return 0;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {9, 3, 5, 7, 6, 9};
    
    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    
    solution.findDuplicate(nums);
    return 0;
}