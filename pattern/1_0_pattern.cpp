#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // number of rows

    for (int i = 1; i <= n; i++) {         // outer loop for rows
        for (int j = 1; j <= i; j++) {     // inner loop for columns
            if (j % 2 != 0)                // odd position → print 1
                cout << "1 ";
            else                           // even position → print 0
                cout << "0 ";
        }
        cout << endl;                      // move to next line
    }

    return 0;
}
