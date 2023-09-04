#include <iostream>
#include <vector>
using namespace std;
int lowerBound(vector<int>&arr, int x){
    int start = 0, end = arr.size()-1;
    int ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]>= x){
            ans =mid;
            end = mid-1;
        }
        else if(x > arr[mid]){
            start = end -1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}
vector <int> bs_method(vector<int>& arr, int k, int x){
    int h = lowerBound(arr, x);
    int l = h - 1;
    while(k--){
        if(l<0){
            h++;
        }
        else if(x-arr[l]> arr[h]-x){
            h++;
        }
        else{
            l--;
        }
    }
    return vector<int>(arr.begin()+l+1, arr.begin()+h);
}
vector <int> twoPtrMethod(vector<int>& arr, int k, int x){
 int l =0, h = arr.size() -1;
 while(h-l>=k){
    if(x - arr(l)> arr(h)-x){
        l++;
    }
    else{
        h--;
    }
    return vector<int>(arr.begin()+l, arr.begin()+h+1);
 }
}
vector< int> findClosestElements(vector<int>& arr, int k, int x){
    return bs_method(arr, k, x);
    return twoPtrMethod(arr, k, x);
}