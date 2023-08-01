#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int n) {
    // string method
    string binaryno;
    while (n > 0) {
        int bit = (n & 1);
        binaryno = to_string(bit) + binaryno;
        n = n >> 1;
    }
    return binaryno.empty() ? "0" : binaryno;
}

int main() {
    int n;
    cin >> n;
    string binary = decimalToBinary(n);
    cout << binary << endl;
}
