#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //full pyramid
    for(int r =0; r < n; r++){
            for (int c =0; c < r + 1; c++){ // row  + 1
                cout << "*";
            }
        cout <<endl;
        }  

    for(int r =0; r < n; r++){
            for (int c =0; c < n-r; c++){ // row  + 1
                cout <<  "*";
            }
            
        cout <<endl;
        }
}