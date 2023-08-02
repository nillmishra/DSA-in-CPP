#include<iostream>
using namespace std;
int main(){
    int arr[10] , i;
    arr[0] = 0;
    arr[1] = 1;
    for (i=2;i<=9;i++)
    {
        arr[i] = arr[i -1] + arr[i -2];
    }
    for(int i=0; i < 10; i++ ){
        cout << arr[i] << endl;
    }
} // O(n)