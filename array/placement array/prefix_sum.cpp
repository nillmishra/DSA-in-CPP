#include <iostream>
#include<vector>
using namespace std;
int prefixsum(vector<int>& arr, int n){
    vector<int>prefix(n);

    //brute force
    //very wrong
    //dont do
    
    for (int i =0; i <n; i++){
        int sum=0;
        for(int j = 0; j <=i; j++){
            cout<<"before "<< sum <<" + " <<arr[j] << endl;
            sum += arr[j];
            cout<<"after "<< sum<<" " <<arr[j] << endl;
        }
        prefix[i]=sum;

        cout << sum << endl;
    }
    // prefix[0] = arr[0];
    // for(int i = 1; i<n; i++){
    //     cout<<"before "<< prefix[i]<<" + " <<arr[i] << endl;
    //     prefix[i] = prefix[i-1]+arr[i];
    //     cout<<"after"<< prefix[i]<<" " <<arr[i] << endl;
    // }

    for(int i =0; i <n; i++){
        cout << prefix[i] <<" ";
    }


}

int main(){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }

    prefixsum(arr, n);
    return 0;
}
