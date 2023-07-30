#include <iostream>
using namespace std;
int main(){
    for(int r =0; r < 5; r++){
            int c;
            for (c =0; c < r + 1; c++){
                int ans = c+1;
                char ch = ans + 'A' -1;
                cout << ch<< " ";
            }
            c= c-1;//initilize kar diya hai issliye ; 
            for(; c>= 1; c--){
            int ans = c;
            char ch =  ans + 'A'-1;
            cout<<ch<<" ";}
        cout <<endl;
        }
        
    }