#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=1;
    for(int r =0; r < n; r++){
            for (int i =0; i < r + 1; i++){
                cout << c;
                c++;
                if(i < r)
                cout <<"*";
            }
        cout <<endl;
        }
        //2nd
        int start = c -n;
        for(int r =0; r < n; r++){
            int k = start;
            for (int i =0; i < n - r; i++){
                cout  <<k;
                k++;
                if(i < n - r-1)
                cout << "*";
            }
            start = start -(n - r -1);
        cout <<endl;
        }
        
    }
