#include<iostream>
using namespace std;
int power(int x, int y){
    int ans =1;
    for (int i = 1; i<=y; i++){
        ans = ans*x;
    }
    //return ans;
    cout<<"Answer is " << ans << endl;
}
int main(){
    int a, b;
    cin >> a >> b;
    power(a,b);
    //int answer = power(a,b);
    //cout << "answer is: " << answer << endl;
    //if return ans is not its give a wrong value
    //void function not return value
    return 0;
}