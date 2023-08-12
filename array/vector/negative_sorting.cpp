//dutch national flag method
#include<iostream>
using namespace std;
void moveAllNegtoLeft(int*a,int n){
    int l =0;
    int h = n-1;
    while(l<h){
    if(a[l]<0){
        l++;
    }
    else if(a[h]>0){
        h--;
    }
    else{
        swap(a[l],a[h]);
    }
    }
}
int main(){
    int a[] = {-4,6,-8,-9,3,7,-2,0,-4,9,-3,1};
    int n = sizeof(a)/sizeof(int);

    moveAllNegtoLeft(a,n);

    for(int i =0; i< n; i++){
        cout << a[i]<<" ";
    }
    cout << endl;
    
}