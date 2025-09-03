#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    //create vector
    vector <int > arr;
    vector<int>v1(5,1);
    cout << arr.size() <<endl;
    cout << arr.capacity() << endl;

    //insert
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(10);
    arr.insert(arr.begin()+1, 89);


    

    //print
    for (int i =0; i< arr.size(); i++){
        cout <<arr[i]<< " ";
    }
    cout << endl;
    cout <<"size of " <<  arr.size() <<endl;
    cout <<"capacity of "<< arr.capacity() << endl;
    cout <<"size of v1 " <<  v1.size() <<endl;
    cout <<"capacity of v1 "<< v1.capacity() << endl;
    v1.push_back(8);
    cout <<"size of v1 " <<  v1.size() <<endl;
    cout <<"capacity of v1 "<< v1.capacity() << endl;

    arr[1]=7;

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



    //vector copy

    vector<int>z;
    z.push_back(65);
    z.push_back(89);
    z.push_back(63);
    z.push_back(80);
    z.push_back(89);

    vector<int>y;
    y = z;
    for(int i =0; i <y.size(); i++){
        cout << y[i] << " ";
    }
    cout <<endl;

    sort(z.begin(), z.end(), greater<int>());
    sort(y.rbegin(), y.rend());

    for(auto i:z)
    cout <<i << " ";
    cout <<endl;
    for(auto i:y)
    cout <<i << " ";

    cout <<endl;

    cout << binary_search(z.begin(),z.end(), 90) << endl;
    cout <<find(y.begin(), y.end(), 65) - y.begin() <<endl;

}

/*
v.front() 1st element
v.back() last  element
v.empty() 0/1  
v.begin() 1st element
v.end() last+1
v.rbegin()  last
v.rend() first-1
sort(v.begin(), v.end());
sort(v.begin(), v.end(), greater<int>())
*/