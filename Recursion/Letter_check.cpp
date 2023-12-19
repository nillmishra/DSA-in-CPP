#include <iostream>
using namespace std;


bool findKey(string str, int i, int n, char key){
    if(i>=n){
        return false;
    }
    if (str[i] == key){
        return true;
    }

    bool ans = findKey(str, i+1, n, key);
    return ans;
}

int main(int argc, char const *argv[])
{
    string str = "Nillotpal";
    int n = str.length();


    char key = 'l';

    int i = 0;
    bool ans = findKey(str, i, n, key);

    cout << "answer is: " << ans  << endl;
    return 0;
}
