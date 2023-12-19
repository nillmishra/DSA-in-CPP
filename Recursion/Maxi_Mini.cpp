#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi){
    if(i>=n){
        return;
    }
    if (arr[i]> maxi){
        maxi = arr[i];
    }

    findMax(arr, n, i+1, maxi);
}

void findMin(int arr[], int n, int i, int& mini){
    if(i>=n){
        return;
    }
    if (arr[i] < mini){
        mini = arr[i];
    }

    findMin(arr, n, i+1, mini);
}
 
int main(int argc, char const *argv[])
{
    int arr[] = {10, 30, 21, 44, 32, 6, 19, 66};
    int n =8;

    int maxi = INT_MIN;
    int mini = INT_MAX;

    int i =0;
    findMax (arr, n, i, maxi);
    findMin (arr, n, i, mini);

    cout << "maximum number is: "<< maxi << endl;
    cout << "minimum number is: "<< mini << endl;
    return 0;
}
