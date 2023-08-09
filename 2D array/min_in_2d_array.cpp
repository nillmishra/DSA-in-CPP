#include <iostream>
#include <limits.h>
using namespace std;
int maximumarray(int arr[][3]){
    int maxi= INT_MIN;
    for (int i = 0; i<4; i++)
    {   
        for (int j = 0; j<3; j++)
        {
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int main()
{
    int arr[4][3];
    cout << "Enter a number: \n";
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout <<endl;
    }
    cout << maximumarray(arr);
    return 0;
}