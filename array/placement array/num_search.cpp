#include <iostream>
#include <vector>
using namespace std;

int numSearch(vector<int>& arr, int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {   // check if element matches
            return i;        // return index immediately if found
        }
    }
    return -1;               // return -1 if not found
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = numSearch(arr, n, k);
    cout << result;

    return 0;
}
