#include<iostream>
using namespace std;

int main(){
    int x = 2, y =6;
    int n = y - x + 1;
    int a = x;
    float result = (n*(2*a + (n-1)*1))/2;
    cout << result <<endl;
}

