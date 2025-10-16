#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;
int highestAltitude(vector<int>& arr, int n){
    vector<int>prefix(n+1);
    
    for (int i =0; i <n; i++){
        int sum=0;
        for(int j = 0; j <=i; j++){
            sum += arr[j];
        }
        prefix[i+1]=sum;
    }

    for(int i =0; i <n+1; i++){
        cout << prefix[i] <<" ";
    }

    int maxAltitude = *max_element(prefix.begin(), prefix.end());
    cout <<endl;
    cout << "Maximum Altitude: " << maxAltitude << endl;


}

int main(){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }

    highestAltitude(arr, n);
    return 0;
}
