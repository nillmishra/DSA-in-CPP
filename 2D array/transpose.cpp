#include <iostream>
using namespace std;

void printarray(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][3], int transpose[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
}

int main() {
    int arr[3][3];
    int transposed[3][3];  // Renamed from "transpose" to "transposed" to avoid conflicts

    cout << "Enter a 3x3 matrix: \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl << "Original Matrix:\n";
    printarray(arr);

    transpose(arr, transposed);
    cout << endl << "Transposed Matrix:\n";
    printarray(transposed);

    return 0;
}
