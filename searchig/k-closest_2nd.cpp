#include <iostream>
#include <vector>
using namespace std;
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
    return twoPtrMethod(arr, k, x);
}