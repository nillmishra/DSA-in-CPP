//sanapping + sorting method
#include<iostream>
using namespace std;
void findMissing(int *a, int n){
    int i =0;
    while(i < n){
        int index = a[i]-1;
        if(a[i] != a[index]){
            swap(a[i],a[index]);
        }
        else{
            i++;
        }
    }
    for(int i=0; i< n; i++){
        cout << a[i]<<" ";
    }
    cout << endl;

    for(int i=0; i< n; i++){
        if(a[i] != i+1)
        cout<<i+1<<" ";
     }  
}
int main(){
    int n;
    int a[] = {5,3,3,3,1};
    n = sizeof(a)/sizeof(int);
    findMissing(a,n);
    return 0;
}