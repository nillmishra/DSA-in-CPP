#include <iostream>
using namespace std;
bool findkey(int arr[][3], int key){
    for (int i = 0; i<4; i++)
    {   for (int j = 0; j<3; j++)
        {
            if(arr[i][j]==key)
            return true;
        }
    }
    return false;
}
int main()
{
    int key =9;
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

    cout <<endl;

    cout << findkey(arr, 9);
    return 0;
}