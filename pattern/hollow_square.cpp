#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int r =0; r<n; r++){
        for(int c =0; c<n;c++){
        if(r == 0 || c ==0 || r ==n-1 || c ==n-1){
            cout << "* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout <<endl;
}
}