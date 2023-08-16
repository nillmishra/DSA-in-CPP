#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int target = 4;
    vector<int> v{1, 2, 4, 4, 4, 6, 7};
    
    auto upper = upper_bound(v.begin(), v.end(), target);
    auto lastOccurrence = prev(upper);
    
    cout << "Index of last occurrence of " << target << ": " << lastOccurrence - v.begin() << endl;
    
    return 0;
}

