#include<iostream>
using namespace std;

int factorial(int n){

cout << "Function is called for n: "<<n << endl;

    //base case
    if(n==1)
        return 1;
    int ans = n * factorial(n-1);
    return ans;

}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int ans = factorial(n);
    cout << "Answer is: " <<ans << endl;
    return 0;
}

//recursion code: 1) Base Case (rukna kab hai)
//                2) Recursive Relaion (f(n) = n*f(n-1))
//                3) Processing (optional)