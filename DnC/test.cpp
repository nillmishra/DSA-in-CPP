#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e- mid;
    //int arr[n];
    int* left= new int[len1]; //******************
    int* right = new int[len2];
    
    // int mid = (s + e) / 2;

    // int len1 = mid - s + 1;
    // int len2 = e - mid;

    // int *left = new int[len1];
    // int *right = new int[len2];

    // for (int i = 0; i < len1; i++) {
    //     left[i] = arr[s + i];
    // }

    // for (int i = 0; i < len2; i++) {
    //     right[i] = arr[mid + 1 + i];
    // }
        int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    for (int i = 0; i<  len2; i++){
        right[i] = arr[k];
        k++;
    }

    int leftindex = 0;
    int rightindex = 0;
    int mainArrayindex = s;  

    while (leftindex < len1 && rightindex < len2) {
        if (left[leftindex] <= right[rightindex]) {
            arr[mainArrayindex++] = left[leftindex++];
        } else {
            arr[mainArrayindex++] = right[rightindex++];
        }
    }

    // Copy remaining elements from left and right arrays if any
    while (leftindex < len1) {
        arr[mainArrayindex++] = left[leftindex++];
    }

    while (rightindex < len2) {
        arr[mainArrayindex++] = right[rightindex++];
    }

    delete[] left;
    delete[] right;
}

void mergesort(int *arr, int s, int e) {
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main() {
    int arr[] = {4, 23, 9, 18, 15, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
