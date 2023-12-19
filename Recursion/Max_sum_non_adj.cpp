#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void solve(vector<int>& arr, int i, int sum, int& maxi) {
    if (i >= arr.size()) {
        maxi = max(sum, maxi);
        return;
    }

    solve(arr, i + 2, sum + arr[i], maxi);
    solve(arr, i + 1, sum, maxi);
}

int main(int argc, char const* argv[]) {
    vector<int> arr{2, 1, 4, 9};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    solve(arr, i, sum, maxi);

    cout << "Maximum sum of non-adjacent elements: " << maxi << endl;

    return 0;
}
