#include<iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {5,2,6,4,9};
    int sizea = 5;
    int brr[]  = {2,5,6,8,6};
    int sizeb = 4;

    vector<int>ans;

    //push all the element to vector arr
    for (int i= 0; i< sizea; i++){
        ans.push_back(arr[i]);
    }
    
    //push all the element to vector brr
    for (int i= 0; i< sizeb; i++){
        ans.push_back(brr[i]);
    }

    //printing array
    cout << "Printing ans array" << endl;
    for (int i= 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }


}
