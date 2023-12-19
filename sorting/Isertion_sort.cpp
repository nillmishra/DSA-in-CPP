#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int > &arr, int n){
    for (int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for (; j>=0; j--)
        {
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }  
        }
        arr[j+1] = temp;
    }
}
int main(int argc, char const *argv[])
{ 
    vector <int> arr{5,3,8,2,9,4,7};
    int n = arr.size();

    insertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
//jo bhiu chota element humko  jaha palce karnaa hai waha se ek ek sare element ko shift kar denge or waha tak
//sorted ban jayega