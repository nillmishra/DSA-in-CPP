#include <bits/stdc++.h>
using namespace std;

int dulpicateIndex(int arr[], int n){
    int start = 1;
    int next = 1;
    int count = 1;
    while(next < n){
        if(arr[next] == arr[next-1]){
            next++;
        }
        else{
            arr[start]= arr[next];
            next++;
            count++;
            start++;
        }
    }
    return count;
}

int main(){
    int arr[]  {1,3,5,7,9,11};
    int n = sizeof(arr) / sizeof(int);
    int res = dulpicateIndex(arr, n);
    cout << "No of Duplicate: " << res << endl;
    for(int i = 0; i < res; i++){
        cout << arr[i] << endl;
    }

    return 0;
}