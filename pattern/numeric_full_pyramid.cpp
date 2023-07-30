#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r =0; r < n; r++){
           for (int c =0; c < n -r -1;c++){ //n - r-  1 = n - (r + 1) 
                cout << " ";
             }
            int start = r+1;
            for (int c =0; c < r + 1; c++){ // row  + 1
                cout<<start;
                start = start + 1;
            }
            int start1 = 2*r;
            for (int c =0; c < r; c++){
            cout <<start1;
            start1 = start1 -1;
            }
            cout<<endl;
        }   
    }