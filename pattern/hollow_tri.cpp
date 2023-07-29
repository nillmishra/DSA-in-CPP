#include <iostream>
using namespace std;
int main(){
    for(int r =0; r< 3; r++){
        if (r==0 || r == 2){
            for (int i =0; i < 5; i++){
                cout << "* ";
            }
        }
        else{
            cout<<"* ";
            for(int i =0; i<3;i++){
                cout << "  ";
            }
            cout <<"*";
        }
        cout <<endl;
    }
}