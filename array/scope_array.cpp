#include<iostream>
using namespace std;
void update(int arr[], int n){
    cout << "Inside the function: "<<endl;
    //udating the first element

    //if i update in funtion in array then the main will aso grt updated 
    arr[0]= 120;
    for (int i=0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;




    cout <<"Going back to main function"<< endl;
}
int main(){
    int arr[3] = {1,2,3};
    update (arr, 3); //arr ka mtlb base address bhi hota hai
    cout <<endl<<"Printing in main function"<<endl;
    for (int i=0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
    return 0;
}