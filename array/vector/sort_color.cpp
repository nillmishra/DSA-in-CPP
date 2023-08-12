#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        //count method
        int zeros, ones, twos;
        zeros=ones=twos=0;
        for(int i =0; i< nums.size();i++){
            if(nums[i]==0) {
                zeros++;
            }
            else if(nums[i]==1){
                ones++;
            }
            else {
                twos++;
            }
        }
        int i =0;
        while(zeros--){
            nums[i]=0;
            i++;
        }
        while(ones--){
            nums[i]=1;
            i++;
        }
        while(twos--){
            nums[i]=2;
            i++;
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
