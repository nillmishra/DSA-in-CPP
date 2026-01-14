#include <iostream>
using namespace std;

int prime(int n){
    if( n == 0){
        return 1;
    }
    int ans  = 1;
    for(int i = 1; i <= n; i++){
       ans = i* ans; 
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    int ans = prime(n);
    cout << ans;

}