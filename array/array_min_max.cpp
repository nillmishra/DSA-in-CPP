#include <iostream>
#include<limits.h>
using namespace std;
int minArray(int arr[], int n){
    int min = INT_MAX;
    for (int i =0; i < n; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int maxArray(int arr[], int n){
    int maxi = INT_MIN;
    for (int i =0; i < n; i++){
        maxi =max(maxi, arr[i]);

        // if (arr[i]>max){
        //     max = arr[i];
        // }
    }
    return maxi;
}
int main()
{
    int size;
    cin >> size;

    int arr[100];
    //taking input
    for (int i =0; i< size; i++){
        cin >> arr[i]; 
    }
    cout <<"Maximum : " <<maxArray(arr, size) << endl;
    cout <<"Minimum : " <<minArray(arr, size) << endl;
    return 0;
}