#include<iostream>
using namespace std;
int main(){
    int n =5;
    for (int i =0; i < n; i++){
        for (int j =0; j< n; j++){
            cout<< "* ";
        }
        cout <<"\n";
    }
    
    return 0;
} // O(n^2)