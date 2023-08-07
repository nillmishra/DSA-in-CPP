#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr{10,20,30,40,50,60};
    int sum =80;
    //print all pair
    //outer loop will transverse for each element
    for (int i= 0; i< arr.size(); i++){
        int element = arr[i];
    //for every elemeent, will tranverse on age  wale elements
        for (int j =i+1; j <arr.size(); j++)
        if(element + arr[j] == sum){
            cout << "pair Found "<< element << " with "<< arr[j] <<endl;
        }
    }

}