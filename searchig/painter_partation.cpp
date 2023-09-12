#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSolution(int A[], int N, int M, long long sol) {
    long long timeSum = 0;
    int c = 1;
    for (int i = 0; i < N; i++) {
        if (A[i] > sol) {
            c++;
        }
        if (timeSum + A[i] > sol) {
            c++;
            timeSum = A[i];
            if (c > M) {
                return false;
            }
        } else {
            timeSum = timeSum + A[i];
        }
    }
    return true;
}

long long minTime(int A[], int N, int M) {
    if (M > N)
        return -1;
    long long start = 0;
    long long end = 0;
    for (int i = 0; i < N; i++) {
        end += A[i];
    }
    long long ans = -1;

    while (start <= end) {
        long long mid = (start + end) / 2;
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
    cout << "Enter the number of tasks (N): ";
    cin >> N;
    cout << "Enter the number of workers (M): ";
    cin >> M;

    int A[N];
    cout << "Enter the time required for each task:" << std::endl;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long result = minTime(A, N, M);
    cout << "Minimum time required: " << result << std::endl;

    return 0;
}
