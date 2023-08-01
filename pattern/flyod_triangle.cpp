#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c = 1;
    for(int r =0; r < n; r++){
            for (int i =0; i < r + 1; i++){
                cout <<c <<" ";
                c++;
            }
        cout <<endl;
        }
    }
