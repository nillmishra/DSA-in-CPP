#include<iostream>   
using namespace std;

int partition(int arr[], int s, int e){
    //choose piviot
    int pivotIndex = s;
    int pivotElement = arr[s];

    int count  = 0;
    for (int  i = 0; i <= e; i++){
        if (arr[i] <= pivotElement){
            count++;
        }
    }

    int rightIndex = s+count;
    swap(arrr[pivotIndex], arr[rightIndex])
    pivotIndex = rightIndex;





}

void quickSort(int arr[], int s, int e){

    //base cassew
    if(s>=e)
        return;

    //partition logic
    int p = partition(arr, s, e);

    //left
    quickSort(arr, s, p-1);

    //right
    quickSort(arr, p+1, e);

}

int main(int argc, char const *argv[])
{
    int arr[] = {8,,13,4,40,50.30};
    int n = 6;

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);

    return 0;
}

