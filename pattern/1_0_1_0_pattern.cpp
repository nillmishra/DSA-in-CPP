#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 1;  // start with 1
    for (int i = 1; i <= n; i++) {       // rows
        for (int j = 1; j <= i; j++) {   // columns
            cout << current << " ";
            current = 1 - current;       // flip 1->0 or 0->1 continuously
        }
        cout << endl;
    }

    return 0;
}
