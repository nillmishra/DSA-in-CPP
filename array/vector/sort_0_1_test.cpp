#include<iostream>
#include <vector>
using namespace std;
void printarray( vector<int>arr){
    for(auto i: arr){
        cout << i <<" ";
    }
    cout << endl;

}
int main(){
    vector<int>arr{0,1,1,0,0,1,0,1,0,1,1,0,0,1,0};

    int start= 0;
    int end = arr.size() -1;
    int i = 0;
    while(start<=end){
        cout<<"for i= " <<i<<" start= "<< start <<" end= "<<end<<endl; 
        if(arr[i]==0){
            cout <<"Found zero"<<endl;
            cout << "before swap ";
            printarray(arr);
            swap(arr[start], arr[i]);
            cout << "after swap ";
            printarray(arr);
        i++;
        start++;
        cout<<"now i= " <<i<<" start= "<< start <<" end= "<<end<<endl; 
        }
        else{
            cout <<"Found one"<<endl;
            cout << "before swap ";
            //swap from right
            printarray(arr);
            swap(arr[i],arr[end]);
            cout << "after swap ";
            printarray(arr);
        end--;
        }

    }
    //print
    for(auto value : arr){
        cout << value << " ";
    }


}
