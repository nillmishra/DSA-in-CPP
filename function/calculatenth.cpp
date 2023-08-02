#include <iostream>
using namespace std;

int find_nth_term(int n, int a, int b, int c) {
  int arr[100] = {a, b, c};
  for (int i = 3; i <= n; i++) {
    arr[i] += arr[i - 1] + arr[i - 2] + arr[i - 3];
  }
  return arr[n - 1];
}

int main() {
    int n, a, b, c;
  
    cin >>n >>a >>b >>c;
    int ans = find_nth_term(n, a, b, c);
    cout << ans;
    return 0;
}