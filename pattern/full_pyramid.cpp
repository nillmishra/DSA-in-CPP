#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r =0; r < n; r++){
            for (int c =0; c < n -r -1;c++){ //n - r-  1 = n - (r + 1) 
                cout << " ";
            }
            for (int c =0; c < r + 1; c++){ // row  + 1
                cout << "* ";
            }
        cout <<endl;
        }   
    }
    // 6 ko 5 banaana hai let n = 6 ,r = 0 
    //n - (r+1)
    //n - r - 1
    //6 ko 4 banana hai let n = 6 ,r = 1
    //n - (r = 1 + 1)
    //n - r -1
