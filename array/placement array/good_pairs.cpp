#include<iostream>
using namespace std;

int goodpairs(int n, int arr[]){
    int count = 0;
    for(int i = 0; i <n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main (){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];
    for(int i =0; i< n; i++){
        cin >> arr[i];
    }

    int result = goodpairs(n, arr);

    for (int i =0; i < n; i++){
        cout <<arr[i] << " " << endl;
    }

    cout <<"The Result is: " << result ;

    return 0;
}
