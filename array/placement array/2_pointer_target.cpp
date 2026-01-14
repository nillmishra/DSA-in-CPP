#include <bits/stdc++.h>
using namespace std;

void twoSumPair(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    while(start < end){
        if(arr[start] + arr[end] == k){
            cout <<"(" << arr[start] << ", " << arr[end] << ")";
            return;
        }
        else if(arr[start] + arr[end] >= k){
            end--;

        }
        else{
            start++;
        }
    }
     cout << "No pair found";
}

int main(){
    int arr[]  {1, 2, 5, 6, 7};
    int key = 9;
    int n = sizeof(arr) / sizeof(int);
    twoSumPair(arr, n, key);

    return 0;
}