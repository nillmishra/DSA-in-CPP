#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "Enter a value: ";
    cin >> n;
    int min = 0;
    for (i = 1; i <= 2 * n - 1; i++) {
        for (j = 1; j <= 2 * n - 1; j++) {
            int a = i;
            if (a > n)
                a = 2 * n - i;
            int b = j;
            if (b > n)
                b = 2 * n - j;
            if (a < b)
                min = a;
            else
                min = b;
            cout << n + 1 - min;
        }
        cout << endl;
    }
    return 0;
}
