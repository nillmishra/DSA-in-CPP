#include<iostream>
using namespace std;

 int printarray(int arr[], int size){
    for(int i = 0; i< size; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
 }

 int inc(int arr[], int size){
    arr[0] = arr[0] + 10;
    //actual array par operation hoo raha hai
    printarray(arr, size);
 }

 int main(){
    int arr[]={5,6};
    int size =2;
    inc (arr, size);
    //addess pass hua hai
    printarray(arr, size);
 }