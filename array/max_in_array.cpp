#include <iostream>
#include <limits.h>
using namespace std;
int maximum(double arr[], int size){
    int maxi = INT_MIN;
    for(int i = 0; i< size; i++){
        if (arr[i]> maxi){
            maxi = arr[i];
        }
    }
    cout << maxi<< endl;;
}
int minimum(double arr[], int size){
    int mini = INT_MAX;
    for(int i = 0; i< size; i++){
        if (arr[i]< mini){
            mini = arr[i];
        }
    }
    return mini;
}

int main(){
    double arr[50] = {11,2,34,56,87,94,90,45,24,67,12,67};
    int size =12;
    maximum(arr, size);
    int x =minimum(arr, size);
    cout << x;
}