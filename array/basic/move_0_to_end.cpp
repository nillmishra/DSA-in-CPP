#include<iostream>
using namespace std;

int main(){
     int arr[12] = {5,0,2,0,0,6,9,0,6,3,0,6};
     int ans[12];
     int idx =0;
     for(int i = 0; i< 12; i++){
        if(arr[i]!= 0){
            ans[idx] = arr[i];
            idx++;
        }
     }
     while(idx!= 12){
      ans[idx]=0;
      idx++;
     }
     for(int i = 0; i< 12; i++){
        printf("%d ", ans[i]);
     }
}