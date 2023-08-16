#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    //vector
    vector<int>v{1,2,3,4,5,6};

    if(binary_search(v.begin(), v.end(), 3)){
        cout <<"Found" <<endl;
    }
    else{
        cout <<"Not Found "<<endl;
    }
    //array

    int arr[] = {1,2,3,4,5,6,7,8};
    int size =8;

    if(binary_search(arr, arr + size, 30)){
        cout <<"Found" <<endl;
    }
    else{
        cout <<"Not Found "<<endl;
    }

}
