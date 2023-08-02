#include<iostream>
using namespace std;
int reverse(int n){
    int ld =0;
    int sum =0;
    while(n!=0){
        ld = n%10;
        sum = sum * 10+ ld;
        n = n/10;
    }
    cout << sum;
}
int main(){
    int n;
    cin>>n;
    reverse(n);
    
}