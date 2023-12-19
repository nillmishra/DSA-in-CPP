#include<iostream>
using namespace std;

climbStairs(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the main term you want to see" << endl;
    cin >> n;
    int ans = climbStairs(n);
    cout << "Answer is:  " << ans << endl;
    return 0;
}
