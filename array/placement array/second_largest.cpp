#include <bits/stdc++.h>

using namespace std;

int secondLargest(vector<int>& arr, int n) {
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {   
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = secondLargest(arr, n);
    cout << result;

    return 0;
}
