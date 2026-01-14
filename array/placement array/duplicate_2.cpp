#include <bits/stdc++.h>
using namespace std;

int dulpicateIndex(int arr[], int n){
    int start = 2;
    int next = 2;
    while(start < n){
        if(arr[start] == arr[next-2]){
            start++;
        }
        else{
            arr[next] = arr[start];
            next++;
            start++;
        }
    }
    return next;
}

int main(){
    int arr[] = {0,0,1,1,1,1,2,3,3};
    int n = sizeof(arr) / sizeof(int);
    int res = dulpicateIndex(arr, n);
    cout << "No of Duplicate: " << res << endl;
    for(int i = 0; i < res; i++){
        cout << arr[i] << endl;
    }

    return 0;
}