#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int frequentCharacter(string s, int n) {
    // frequency array for 26 lowercase letters
    vector<int> freq(26, 0);

    // count frequency of each character
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    // print frequency array
    cout << "Frequencies: ";
    for (int i = 0; i < 26; i++) {
        cout << freq[i] << " ";
    }
    cout << endl;

    // find the most frequent character
    int maxFreq = *max_element(freq.begin(), freq.end());
    int maxCharIndex = max_element(freq.begin(), freq.end()) - freq.begin();

    cout << "Most frequent character: " << char('a' + maxCharIndex)
         << " (appears " << maxFreq << " times)" << endl;

    return maxFreq;
}

int main() {
    string s;
    cin >> s;
    frequentCharacter(s, s.length());
    return 0;
}
