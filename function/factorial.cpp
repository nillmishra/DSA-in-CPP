#include<iostream>
using namespace std;
int fact(int n){
    int fact =1;
    for(int i =1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int n, v;
    cout <<"Enter any number :"<<endl;
    cin>>n;
    v = fact(n);
    cout <<v<<" is the factorial value of " << n;
}



