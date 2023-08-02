#include<iostream>
using namespace std;
int evenOdd(int n){
    if(n%2==0){
        cout << "even";}
    else{
        cout << "odd";
    }
    }
int main (){
    int n;
    cin >>n;
    int result = evenOdd(n);
}