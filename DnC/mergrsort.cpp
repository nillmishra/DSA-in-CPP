#include<iostream>
using namespace std;

void merge( int *arr, int s, int e){

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e- mid;
    //int arr[n];
    int* left= new int[len1]; //******************
    int* right = new int[len2];

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

    //merege logic

    int leftindex = 0;
    int rightindex = 0;
    int mainArrayindex = s;
    
    while(leftindex < len1 && rightindex < len2){
        if(left[leftindex] < right[rightindex]){
            arr[mainArrayindex++] = left[leftindex++];
        }
        else{
            arr[mainArrayindex++] = right[rightindex++];
        }
    }

    while(leftindex < len1){
        arr[mainArrayindex++] = left[leftindex++];
    }

    while(rightindex < len2){
        arr[mainArrayindex++] = right[rightindex++];
    }
    delete[] left;
    delete[] right;
}
void mergesort(int *arr, int s, int e){
    //base case
    //if s == e single elemet
    //s > e  --> invaid array
    if(s >= e)
        return;

    int mid = (s+e)/2;
    //left sorted 
    mergesort(arr, s, mid);

    //righht sorted
    mergesort(arr, mid+1, e);

    //merege two sorted array

    merge(arr, s, e);

}


int main(){
    int arr[] = {4,23,9,18,15,7};
    int n = 6;

    int s = 0;
    int e = n-1;
    mergesort(arr, s, e);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
