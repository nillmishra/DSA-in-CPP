#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int > &arr, int n){
    for (int i=0; i<n-1; i++)
    {
        for(int j=0; j<n; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1], arr[j]);
            }
        }
        
    }
}
int main(int argc, char const *argv[])
{
    vector <int> arr{5,3,8,2,9,4,7};
    int n = arr.size();

    SelectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
//bagal wale element se swap kana hai
