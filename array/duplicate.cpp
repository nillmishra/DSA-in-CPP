#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for (int i = 0; i <nums.size(); i++){
            for (int j = i+1; j <nums.size(); j++){
            if (nums[i]==nums[j])
            {
                cout <<"\nThe duplicate number is "<< nums[i] <<endl;
                break;
            }
            }
        }
        return 0;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1, 3, 5, 6, 9, 9};
    
    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    
    solution.findDuplicate(nums);
    return 0;
}