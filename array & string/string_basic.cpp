#include<iostream>
#include <string.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    //getline(cin, str);
    cout << str<<endl;

    cout <<"Length is: " << str.length() <<endl;
    cout <<"isEmpty: " <<str.empty()<<endl;
    str.push_back('A');
    cout << str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<str.substr(0,3)<<endl;

    string a = "Love";
    string b = "Lover";
    if(a.compare(b)==0){
        cout << "a andb are same string"<<endl;

    }
    else{
        cout << "not same"<< endl;
    }

    string x = "bdcd";
    string y = "bcda";

    cout <<x.compare(y) << endl;

    string sen = "Ji bhaiya hi";
    string tar;
    cin >> tar;

    cout << sen.find(tar)<< endl;
    if(sen.find(tar) == string::npos){
        cout << "Not found"<< endl;
    }

    string strr = "This is my First message";
    string word = "babbar";

    strr.replace(0, 4, word);
    cout << strr << endl;

    string art ="ASFGDHFHJHMNBDVSH";
    art.erase(0,4);
    cout << art;
    return 0;
}