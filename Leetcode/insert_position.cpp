#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int output;
        for(int i=0;i<n;i++){
            if(target == nums[i] || target < nums[i]) {
                output = i;
                break;
            }
        }
        return output;
}
int main(int argc, char const *argv[])
{ 
    vector<int> nums{1,3,5,6};
    int target = 5;
    int output =searchInsert(nums, target);

    cout << output << endl;

    return 0;
}
