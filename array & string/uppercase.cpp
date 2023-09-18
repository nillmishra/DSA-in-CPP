#include<iostream>
#include<string.h>
using namespace std;
void conveertIntoUpperCase(char name[]){
    for(int i =0; i<strlen(name); i++){
        if(name[i]>='a'&& name[i]<='z'){
        name[i] = name[i] -'a' + 'A';
        }
        }
    }
int main() {
    char name[100];
    cin.getline(name,100);
    conveertIntoUpperCase(name);
    cout << "uppercase converted: " << name <<endl;
}
