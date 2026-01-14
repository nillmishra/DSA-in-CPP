#include <bits/stdc++.h>
using namespace std;

int subbarray(int arr[], int n){
    for(int i = 0; i < n; i++){ 
        int sum =0;
        for(int j = i; j < n ; j++){ 
                sum += arr[j];
                cout << sum;
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