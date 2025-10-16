#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    // Input array and target
    vector<int> arr = {2, 7,6,4,2,6,11, 15};
    int target = 9;

    // Unordered set to store seen elements
    unordered_set<int> seen;

    // Loop through array
    for (int num : arr) {
        int needed = target - num;  // find the complement
        if (seen.count(needed)) {  // check if complement already seen
            cout << "Pair found: (" << needed << ", " << num << ")\n";
        }
        seen.insert(num);  // add current number to set
    }

    return 0;
}
