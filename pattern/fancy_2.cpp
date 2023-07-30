#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r =0; r < n; r++){
            for (int i =0; i < r + 1; i++){
                cout << r+1;
                if(i!=r)
                cout  << "*";

            }
        cout <<endl;
        }
        //2nd
        for(int r =0; r < n; r++){
            for (int i =0; i < n - r; i++ ){
                cout << n-r;
                if(i!=n-r-1)
                cout  << "*";

            }
        cout <<endl;
        }
        
    }
