#include<iostream>
using namespace std;
int main(){
    int arr1[] ={1, 2, 3, 4, 5, 6, 7, 8,9};
    int n =9;
    int arr2[] ={1, 2, 12, 5, 0, 11, 8,9};
    int m =8;
    int sum1 =0;
    int sum2 = 0;
    for (int i =0; i < 9; i++ ){
        sum1 += arr1[i]; 
    }
    cout <<sum1 <<endl;
    for (int i =0; i < 8; i++ ){
        sum2 += arr2[i];
    }
    cout <<sum2 <<endl; 
    return 0;
} //O(n + m)