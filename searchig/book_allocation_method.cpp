#include <iostream>
#include <vector>
#include <numeric> // Added for accumulate function
using namespace std;

bool isPossibleSolution(int A[], int N, int M, int sol) {
    int pageSum = 0;
    int c = 1;
    for (int i = 0; i < N; i++) {
        if (A[i] > sol) {
            c++;
        }
        if (pageSum + A[i] > sol) {
            c++;
            pageSum = A[i];
            if (c > M) {
                return false;
            }
        } else {
            pageSum = pageSum + A[i];
        }
    }
    return true;
}

int findPages(int A[], int N, int M) {
    if (M > N)
        return -1;
    int start = 0;
    // Calculate the total number of pages using the accumulate function
    int end = accumulate(A, A + N, 0);
    int ans = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (isPossibleSolution(A, N, M, mid)) {
            ans = mid;
            end = mid - 1; // Corrected this line from "end = mid + 1" to "end = mid - 1"
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int N, M;
    cout << "Enter the number of books (N): ";
    cin >> N;
    cout << "Enter the number of students (M): ";
    cin >> M;

    int A[N];
    cout << "Enter the number of pages in each book:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = findPages(A, N, M);
    cout << "The minimum number of pages each student must read: " << result << endl;

    return 0;
}
