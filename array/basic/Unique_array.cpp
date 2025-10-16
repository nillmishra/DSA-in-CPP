#include <iostream>
using namespace std;
int findunique(int *arr,int size){
    int ans =0;
    for (int i =0; i< size; i++){
        ans = ans^arr[i];//1^1 means xor
    }
    cout << ans << endl;
    //return ans;
}
int main(int argc, char const *argv[])
{
    int arr[7] ={1,2,3,4,3,2,1};
    findunique(arr, 7);
    //int answer = findunique(arr, 7);
    //cout << answer << endl;

    return 0;
} 
