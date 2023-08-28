#include<iostream>
#include<vector>
using namespace std;
int findPiviot(vector<int>arr){
    int s = 0;
    int e = arr.size() -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(mid <= e && arr[mid] > arr[mid+1]) return mid;
        if(mid -1 >= s&& arr[mid-1]>arr[mid]) return mid-1;
        if(arr[s]>arr[mid]) e = mid-1;
        else s = mid+1;
    mid =s+(e-s)/2;
    }
    return -1;
    }
int main(){
vector <int> arr{5,6,7,8,9,2,4,6,8};
    int ans = findPiviot(arr);
    if(ans == -1){
        cout << " Kuch tho gadbad hai daya "<<endl;
    }
    else{
        cout << "Ans is at index "<< ans <<endl;
        cout<< "Value of ans is "<< arr[ans] << endl;
    }
    return 0;
}
