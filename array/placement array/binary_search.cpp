#include <iostream>
using namespace std;

int BinSearch(int n, int arr[], int k){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == k)
            return mid;
        else if(arr[mid] > k)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main(){
    int arr[] = {1,3,5,6,7,8,9,13,20};
    int n = sizeof(arr)/sizeof(int);
    int k = 6;

    cout << BinSearch(n, arr, k);
    return 0;
}
