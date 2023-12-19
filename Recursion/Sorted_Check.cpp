#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n, int i){
    if(i==n-1){
        return true;
    }
    if(arr[i] > arr[i+1]){
        return false;
    }

    checkSorted(arr, n, i+1);
}

int main(int argc, char const *argv[])
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n =  5;

    int i =0;

    bool isSorted = checkSorted(arr , n, i);

    if(isSorted){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
    
    return 0;
}
