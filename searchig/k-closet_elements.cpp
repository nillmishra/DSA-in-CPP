#include <iostream>
#include <vector>
#include <algorithm> // For sorting

using namespace std;

vector<int> twoPtrMethod(vector<int>& arr, int k, int x) {
    int l = 0, h = arr.size() - 1;
    while (h - l >= k) {
        if (x - arr[l] > arr[h] - x) {
            l++;
        } else {
            h--;
        }
    }

    return vector<int>(arr.begin() + l, arr.begin() + h + 1);
}

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    return twoPtrMethod(arr, k, x);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    int x = 3;

    vector<int> result = findClosestElements(arr, k, x);

    cout << "Closest elements to " << x << " are:";
    for (int num : result) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
