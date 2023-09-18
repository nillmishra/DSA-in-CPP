#include<iostream>
#include<string.h>
using namespace std;
char replaceSpace(char *name){
    for(int i =0; i<strlen(name); i++){
        if(name[i]==' '){
            name[i] = '@';
        }
    }
}
int main() {
    char name[100];
    cin.getline(name,100);
    cout << name << endl;
    replaceSpace(name);
    cout << "replaced string is :\n" << name <<endl;
}
