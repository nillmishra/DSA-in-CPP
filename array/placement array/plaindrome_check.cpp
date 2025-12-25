#include<iostream>
using namespace std;
bool plaindromeCheck(int n, int ans){
    if(n != ans){
        return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int temp = n;
    
    while(n > 0){
        int digit = n%10;
        ans = ans*10 + digit;
        n = n/10;
    }
    cout << ans << endl;

    int result = plaindromeCheck(temp, ans);

    cout << result;
    

}