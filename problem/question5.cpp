#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n =5;
    for (int i =0; i < n; i++){
        for (int j =0; j< sqrt(n); j++){
        cout<< "* ";
        }
        cout <<"\n";
    }
    return 0;
}
/*

* i =0, j = sqrt(n) instructions
* i =0, j = sqrt(n) instructions
* i =0, j = sqrt(n) instructions
* i =0, j = sqrt(n) instructions
* .
* .
* .
* .
* .
* i = n-1, j = sqrt(n) instructions
*Total >> n * sqrt(n)
*worst >> O(nsqrt(n))

*/