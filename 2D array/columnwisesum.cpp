#include <iostream>
using namespace std;
void columnwisesum(int arr[][3]){
    for (int i = 0; i<4; i++)
    {   
        int sum =0;
        for (int j = 0; j<3; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum <<endl;
    }

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

    columnwisesum(arr);
    return 0;
}