#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int>& stalls, int k, int mid) {
    int c = 1;
    int pos = stalls[0];
    for (int i = 0; i < stalls.size(); i++) {
        if (stalls[i] - pos >= mid) {
            c++;
            pos = stalls[i];
        }
        if (c == k) return true;
    }
    return false;
}

int solve(int n, int k, vector<int>& stalls) {
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (isPossibleSolution(stalls, k, mid)) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, k;
    cout<<"no of element in array" <<endl;
    cin >>n;
    cout <<"no of cows" <<endl;
    cin >> k;
    vector<int> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    int result = solve(n, k, stalls);
    cout <<"The minimum size is "<<result << endl;

    return 0;
}
