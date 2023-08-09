#include<iostream>
#include<vector>
using namespace std;
int main (){
    //vector<vector<int>>arr(rows,  vector<int>(column, element));
    vector<vector<int>>arr(3,  vector<int>(5, -101));
    for (int i = 0; i<arr.size(); i++)
    {
        for (int j = 0; j<arr[i].size(); j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout <<endl;
    }


}