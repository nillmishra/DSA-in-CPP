#include<iostream>
#include<string.h>
using namespace std;
bool Plaindrome(char name[]){
    int i = 0;
    int j = strlen(name) - 1;
    while (i <=j) {
        if(name[i]!=name[j]){
        return false;
        }
        else{
        i++;
        j--;
        }
    }
    return true;
}
int main() {
    char name[100];
    cin.getline(name,100);
    cout << "planindrome check: " << Plaindrome(name) <<endl;
}
