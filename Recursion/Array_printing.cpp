#include <iostream>
using namespace std;

void arrayprint(int arr[], int n, int i){
    if(i>=n){
        return;
    }
    
    cout << arr[i] << " ";
    
    arrayprint(arr, n, i+1); //++i

    //cout << arr[i] << " ";
}

int main(int argc, char const *argv[])
{
    int arr[7] = {10, 20,30,40,50,60,70};
    int n =5;
    int i =0;

    arrayprint(arr, n, i);
    return 0;
}

