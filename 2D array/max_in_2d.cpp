#include <iostream>
#include <limits.h>
using namespace std;
int minimumnarray(int arr[][3]){
    int mini= INT_MAX;
    for (int i = 0; i<4; i++)
    {   
        for (int j = 0; j<3; j++)
        {
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
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
    cout << minimumnarray(arr);
    return 0;
}