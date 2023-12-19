#include<iostream>
using namespace std;

fib(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);

    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the main term you want to see" << endl;
    cin >> n;

    int ans = fib(n);
    cout << n << "th term is:  " << ans << endl;

    return 0;
}
