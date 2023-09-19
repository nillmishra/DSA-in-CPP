#include <iostream>
#include<string.h>
using namespace std;

    string removeDuplicates(std::string s) {
        int n = s.length();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    s.erase(i, 1);
                    n--; 
                    i--;
                }
            }
        }
        return s;
    }

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    string result = removeDuplicates(input);
    
    cout << "String with duplicates removed: " << result << std::endl;
    
    return 0;
}
