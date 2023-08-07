#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,3,4,6,8};
    vector<int>brr{3,3,4,10};
    vector<int>ans;

    //outer loop of vector arr
    for (int i= 0; i< arr.size(); i++){
        int element = arr[i];
        for (int j= 0; j< brr.size(); j++){
        if(element == brr[j]){
                //mark
                brr[j] = -1;
            ans.push_back(element);
        }
    }
    }
    
    //push all the element to vector brr
    

    //printing array
    cout << "Printing ans array" << endl;
    for(auto value : ans){
        cout <<value << " ";
    }
    cout << endl;

}
