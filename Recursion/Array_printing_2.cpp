#include <iostream>
using namespace std;

void arrayprint(int arr[], int n){
    if(n==0){
        return;
    }
    cout << arr[0] << " ";

    arrayprint(arr+1, n-1);
}

int main(int argc, char const *argv[])
{
    int arr[7] = {10, 20,30,40,50,60,70};
    int n =5;

    arrayprint(arr, n);
    return 0;
}
