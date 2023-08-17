//works on Big O(log n)
#include<iostream>
using namespace std;
int firstsqrt(int n){
    int target = n;
    int start = 0;
    int end = n;
    int mid = start + (end-start)/2; 
    int ans = -1;
    while(start <= end ){
        if(mid * mid== target){
            return mid;
        }
        //for right side 
        if (mid*mid> target){
            end = mid -1;
        } //key < arr[mid]
        else{
            ans = mid;
            start = mid +1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int ans = firstsqrt(n);
    cout <<"Ans is "<< ans << endl;

    int precision;
    cout <<"Enter the number of floating digits in precision"<< endl;
    cin >> precision;

    double step = 0.1;
    double finalans = ans;
    for(int i =0; i < precision; i++){
        for(double j = finalans; j*j<=n; j= j+step){
            finalans = j;
        }
        step = step/10;
    }
    cout <<"Final ans is "<<finalans << endl;
}