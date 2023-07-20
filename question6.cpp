#include<iostream>
using namespace std;
int main(){
    int value = 0;
    int n = 10;
    //for(int i =1; i<= n; i*=2)
    for(int i =1; i<= n; i+=i)//both are same
    {
        value++;
        cout <<i<<endl;
    }
    return 0;
} //O(log n)