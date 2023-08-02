#include<iostream>
using namespace std;
int primeCheck(int n){
    int flag = 0;
   for(int i =2; i <n;i++){
    if(n%i == 0){
    flag = 1;
    break;
    }
    }
    if(flag == 0){
        cout << "prime";
    }
    else{
        cout << "Not prime";
    }
}

int main()
{
    int n, v;
    cout <<"Enter any number :"<<endl;
    cin>>n;
    primeCheck(n);
}



