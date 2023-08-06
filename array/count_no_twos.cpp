#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,7,2,1,2,8,0,2,1,5,3,7,2};
    int size =15;
    int count = 0;
    
    for(int i = 0; i< size; i++){
        if(arr[i]==2){
            count++;
        }
    }
    cout << "Number = "<< count << endl;
}