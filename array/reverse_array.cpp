#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cin>> n;
    
    int arr[n], rev[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(i =0; i< n; i++){
        rev[i]=arr[n -1 -i];
    }

    for(i =0; i< n; i++){
        cout << rev[i] <<" ";
    }
    return 0;
}

