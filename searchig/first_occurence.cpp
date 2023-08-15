#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstoccur(vector<int>v, int target){
    int s =0;
    int e = v.size() -1;
    int mid = s + (e -s)/2;
    int ans = -1;

    while(s <= e){
        if(v[mid]==target){
            ans = mid;
            e = mid -1;
        }
        else if(target < v[mid]){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
int main(){
    int target =4;
    vector<int>v{1,2,4,4,4,6,7};
    int indexoffirstoccur =firstoccur(v,target);
    cout <<"ans is "<<indexoffirstoccur <<endl;
    return 0;

}