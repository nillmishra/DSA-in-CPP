//works on Big O(log n)
#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2; 
    while(start <= end ){
        if(arr[mid] == key){
            return mid;
        }
        //for right side 
        if (key > arr[mid] ){
            start = mid +1;
        } //key < arr[mid]
        else{
            end = mid -1;
        }
        mid = (start+end)/2;//s +   (e + s)/2 for bigger value
    }
    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int size = 8;
    int target =10;

    int indexOftarget = binarySearch(arr,8,target);
    if(indexOftarget==-1){
        cout <<"target not found" <<endl;
    }
    else {
        cout << "target found at "<<indexOftarget<<" index"<<endl;
    }
}