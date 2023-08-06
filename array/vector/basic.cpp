#include<iostream>
#include <vector>
using namespace std;
int main(){
    //create vector
    vector <int > arr;
    cout << arr.size() <<endl;
    cout << arr.capacity() << endl;

    //insert
    arr.push_back(5);
    arr.push_back(6);
    //print
    for (int i =0; i< arr.size(); i++){
        cout <<arr[i]<< " ";
    }
    cout << endl;

    //remove 
    arr.pop_back();

    //print
    for (int i =0; i< arr.size(); i++){
        cout <<arr[i]<< " ";
    }
    cout << endl;

    vector <int> brr(10);
    cout <<"Size of b " << brr.size()<<endl;
    cout <<"Capacity of b " << brr.capacity()<<endl;

    for (int i =0; i< brr.size(); i++){
        cout <<brr[i]<< " ";
    }
    cout << endl;

    int n;
    cout <<"Enter the value of n " <<endl;
    cin>>n;

    vector <int> trr(n, -1);
    cout <<"Size of b " << trr.size()<<endl;
    cout <<"Capacity of b " << trr.capacity()<<endl;
    for (int i =0; i< trr.size(); i++){
        cout <<trr[i]<< " ";
    }
    cout << endl;


    vector <int> crr{10, 20, 30,40,50,60,70,80};
    cout <<"Size of b " << crr.size()<<endl;
    cout <<"Capacity of b " << crr.capacity()<<endl;
    for (int i =0; i< crr.size(); i++){
        cout <<crr[i]<< " ";
    }
    cout << endl;

    cout << "Vector is empty or not "<< crr.empty()<< endl;
    vector <int> drr;
    cout << "Vector is empty or not "<< drr.empty()<< endl;
}