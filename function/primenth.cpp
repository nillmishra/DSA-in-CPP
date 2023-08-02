#include<iostream>
using namespace std;
bool primenth(int n){
    int v = 0; 
    for(int i =2; i<n;i++){
    v = n%i;
    if(v==0)
    return false;
    }
    return true;
}

int main()
{
    int n;
    cout <<"Enter any number :"<<endl;
    cin>>n;
    for(int i = 1; i<=n;i++){
    bool prime = primenth(i);
    if(prime){
        cout << i<< " ";
    }
    }
}
