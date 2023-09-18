#include<iostream>
#include<string.h>
using namespace std;
void conveertIntoLowerCase(char name[]){
    for(int i =0; i<strlen(name); i++){
        name[i] = name[i] +'a' - 'A';
        }
    }
int main() {
    char name[100];
    cin.getline(name,100);
    conveertIntoLowerCase(name);
    cout << "lowercase converted: " << name <<endl;
}
