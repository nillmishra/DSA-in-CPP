#include<iostream>
#include <string.h>
using namespace std;
bool compareString(string a, string b){
    if(a.length()!= b.length()){
        return false;
    }
    else{
        for (int i =0; i<= a.length(); i++){
            if(a[i]!= b[i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string a , b;
    cin >> a >> b;
    cout << compareString(a,b) <<endl;

}