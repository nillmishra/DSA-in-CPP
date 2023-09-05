#include <iostream>
using namespace std;
int bs(int a[], int start , int end, int x){
    while(start<= end){
        int mid =(start + end)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(x > a[mid]){
            start =mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int findPairs(vector<int>& nums, int k){
    sort(nums.begin(), nums.end());
    set<pair<int, int>>, ans;

    for (int i =0; i < nums.size(); i++){
        if(bs(nums, i+1, nums[i]+ k,) != -1){
            ans.insert({nums[i], nums[i]+k});
        }
    }
}