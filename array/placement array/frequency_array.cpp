#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;
int frequencyArray(vector<int>& arr, int n){
    int maxNum = *max_element(arr.begin(), arr.end());

    vector<int>freq(maxNum);
    for (int i =0; i <n; i++){
        freq[arr[i]]+= 1;
    }
    for(int i =0; i <maxNum+1; i++){
        cout << freq[i] <<" ";
    }
}

int main(){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }

    frequencyArray(arr, n);
    return 0;
}
