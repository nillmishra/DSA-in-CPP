#include <bits/stdc++.h>
using namespace std;

int subbarray(int arr[], int n){
    for(int i = 0; i < n; i++){ 
        for(int j = i; j < n ; j++){ 
            for(int k = i; k <=j ; k++){ 
                cout << arr[k];
            }
            cout << ",";
        }
        cout << endl;
    }
}

int main(){
    int arr[]  {1,3,5,7};
    int n = sizeof(arr) / sizeof(int);
    subbarray(arr, n);

    return 0;
}