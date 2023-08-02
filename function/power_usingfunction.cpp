#include<iostream>
using namespace std;
void power(){
    int x, y;
    cin >> x >> y;
    int ans =1;
    for (int i = 1; i<=y; i++){
        ans = ans*x;
    }
    cout<<"Answer is " << ans << endl;
}
int main(){
    power();
    return 0;
}