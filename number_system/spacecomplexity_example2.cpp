#include<iostream>
using namespace std;
int main(){
    int n =8;
    int a =0, b = 1, c =1;
    cout << a << endl;
    cout << b << endl;
    for(int i = 2; i <= n; i++){
        c =a +b;
        a = b;
        b = c;
        cout << c << endl;
    }
    return 0;
} //O(1) constant