#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 6, 9, 3, 5, 0, 9, 1, 3, 6};
    int size = 10;
    int target = 10; // Define the target sum
    int i = 0;
    int j = size - 1;
    
    while(i < j){
        if(arr[i] + arr[j] == target){
            cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
            break;
        }
        else if(arr[i] + arr[j] > target){
            j--;
        }
        else if(arr[i] + arr[j] < target){
            i++;
        }
    }
    
    return 0;
}
