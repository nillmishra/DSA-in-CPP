#include<iostream>
using namespace std;

counting(int n){
    //base case 
    if(n==0){
        return 0;
    }
    //processing
    cout << n << endl;

    //recursive call
    counting(n-1);

}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    counting (n);
    return 0;
}

