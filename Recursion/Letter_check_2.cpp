#include <iostream>
#include <vector>
using namespace std;


void findKey(string str, int i, int n, char key, vector<int>&ans){
    if(i>=n){
        return;
    }
    if (str[i] == key){
    //cout << "Found at : " << i+1 << endl;
    ans.push_back(i);
    }

    findKey(str, i+1, n, key, ans);
}

int main(int argc, char const *argv[])
{
    string str = "Nillotpal";
    int n = str.length();


    char key = 'l';

    int i = 0;
    vector<int>ans;
    findKey(str, i, n, key, ans);

    cout << "printing ans" << endl;
    for(auto val: ans){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
