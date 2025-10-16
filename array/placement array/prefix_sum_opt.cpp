#include <iostream>
#include <vector>
using namespace std;

void prefixsum(vector<int>& arr, int n) {
    vector<int> prefix(n);
    
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    prefixsum(arr, n);
    return 0;
}
