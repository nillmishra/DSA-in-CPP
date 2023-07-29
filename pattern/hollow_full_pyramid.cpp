#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int r =0; r<n; r++){
        int k =0;
        for(int c =0; c<(2*n) - 1;c++){
        if(c < n- r -1){
            cout << " ";
        }
        else if(k< 2*r + 1){
            if(k==0||k== 2*r || r ==n-1)
            cout <<"*";
            else{
            cout<<" ";
            }
            k++;
        }
        else{
            cout<<" ";
        }
        //cout <<endl;
    }
    cout <<endl;
}
}
