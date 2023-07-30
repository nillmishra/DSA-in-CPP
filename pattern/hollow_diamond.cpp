#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r =0; r < n; r++)
    {
            for (int c =0; c < n -r -1;c++){ //n - r-  1 = n - (r + 1) 
                cout << " ";
            } 
            for (int c =0; c < 2* r + 1; c++){ // row  + 1
                if(c==0 || c==2*r){
                cout << "*";
            }
            else{
                cout << " ";
            }
    }
    cout <<endl;
    }
    for(int r =0; r < n; r++){
            for (int c =0; c < r;c++){ //n - r-  1 = n - (r + 1) 
                cout << " ";
            }
            for (int c =0; c < 2*n - 2*r - 1; c++){ 
                if(c ==0 || c == 2*n -2*r -2){
                cout <<  "*";
                }
                else{
                cout << " ";
                }
            }
            
        cout <<endl;
        }   
}
// n = 4 abbb 4 ko 7 banana hai
//2n - 2r - 1
//n = 3 abb 3 ko 5 banna hai
//2*3 - 2*1 -1