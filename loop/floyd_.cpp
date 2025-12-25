#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    int count = 1;
    for(int i =1; i <=n; i++){
        for(int j  = 0; j < i; j++){
            cout << count <<" ";
            count++;
        }
        cout << endl;
    }


    return 0;
}