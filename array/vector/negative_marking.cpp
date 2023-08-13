#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //visited method
        int ans =-1;
        for(int i =0; i< nums.size(); i++){
            int index = abs(nums[i]);
            if(nums[index]< 0){
                ans = index;
                break;
            }
            nums[index] *= -1;
        }
        return ans;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1, 3, 5, 6, 6, 9};
    
    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    
    int ans = solution.findDuplicate(nums);
    cout <<"\nThe duplicate number is "<< ans <<endl;
    return 0;
}