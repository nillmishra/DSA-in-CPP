#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int l =0, m =0, h=nums.size()-1;
       while(m<=h){
        if(nums[m]==0){
            swap(nums[l],nums[m]);
            m++; l++;
        }
        else if(nums[m]==1){
            swap(nums[l],nums[m]);
            m++;
        }
        else{
            swap(nums[m],nums[h]);
            h--;
        }
       }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
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
