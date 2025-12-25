#include<iostream>
using namespace std;


int main(){
    int n; 
    cin >> n;
    bool isPrime = true;
    for(int i =2; i < n-1; i++){
        if(n%i == 0){
            isPrime =false;
            break;
        }
    }

    if(isPrime == true){
        cout << "prime";
    }
    else{
        cout << "not prime";
    }
    return  0;
}