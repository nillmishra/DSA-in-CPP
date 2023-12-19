#include<iostream>
#include <vector>
using namespace std;

void printSubsquence(string str, string output, int i , vector<string>& v){
    if(i>=str.length()){
        v.push_back(output);
        return;  
    }

    //exclude
    printSubsquence(str, output, i+1, v);
    //include
    output.push_back(str[i]);
    printSubsquence(str, output, i+1, v);
}

int main(int argc, char const *argv[])
{        
    string str = "abc";
    string output = "";
    vector<string>v;
    int i = 0;
    printSubsquence(str, output, i, v);

    cout << "Printing all subsquence: "<<endl;
    for(auto val: v){
        cout << val << " ";
    }
    cout << endl;

    cout << "Size of vector : " << v.size() << endl;
    return 0;
}
        