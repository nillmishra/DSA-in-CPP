#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int arr[] = {1,32,45,6,7,78,6,3,90};
    int i =0;
    int n = sizeof(arr)/sizeof(int);
    while(i < n/2){
        swap(arr[i], arr[n-i-1]);
        i++;
    }
    for(int i =0; i <n; i++){
        cout << arr[i] << " ";
    }

}