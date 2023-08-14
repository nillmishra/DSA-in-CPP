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
    int even[6] = {2,4,6,8,12,14};
    int odd[5] ={1,3,5,7,9};
    int index;
    index = binarySearch(even, 6, 12);
    cout <<"Index of 12 is "<<index <<endl;
    index = binarySearch(odd, 5, 5);
    cout <<"Index of 5 is "<<index <<endl;

}