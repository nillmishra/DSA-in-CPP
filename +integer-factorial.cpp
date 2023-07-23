#include<iostream>
using namespace std;
int fact(int x){
    if (x == 0 || x == 1)
    return 1;
    else
    return(x*fact(x-1));
}
int main()
{
    int n, v;
    cout <<"Enter any +intrger number :"<<endl;
    cin>>n;
    v = fact(n);
    cout <<v<<" is the factorial value of " << n;
}




