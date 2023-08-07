#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr{10,20,30,40,50,60};
    //print all pair
    //outer loop will transverse for each element
    for (int i= 0; i< arr.size(); i++){
        cout <<"We are a element : " << arr[i]<< endl;
        int element = arr[i];
    //for every elemeent, will tranverse on age  wale elements
        for (int j =i+1; j <arr.size(); j++)
            cout << "pair "<< element << "with "<< arr[j] <<endl;
    }

}