#include<iostream>
using namespace std;
bool search(int arr[], int n, int key){
    for (int i =0; i< n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;

}
int main(){
    int arr[10] = {-5, 6, 8, 4,-3, -7, 8, 0, 3, 1};
    //wether 1is in it or not?
    cout <<"Enter the you want to search ?"<< endl;
    int key;
    cin>>key;
    bool found = search(arr, 10, key);

    if(found){
        cout <<"Key is present"<<endl;
    }
    else cout <<"Key is absent" <<endl;
    return 0;
}