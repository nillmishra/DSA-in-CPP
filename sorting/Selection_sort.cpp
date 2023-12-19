#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int > &arr, int n){
    for (int i=0; i<n-1; i++)
    {
        int minIndex =  i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(int argc, char const *argv[])
{ 
    vector <int> arr{5,3,8,2,9,4,7};
    int n = arr.size();

    BubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

//round 1 
//0th index ki element ko sbasbe choti element man leni hai 
//uske baad tarvese mai 2 loop mai 0th element se choti yadi koi element hai
//array mai to usko 0th se swap kar dena hai
