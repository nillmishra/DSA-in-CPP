#include <iostream>
#include <string.h>
using namespace std;

void reverseCharArray(char name[]) {
    int i = 0;
    int j = strlen(name) - 1;
    // while (i < j) {
    //     swap(name[i], name[j]);
    //     i++;
    //     j--;
    // }

    for(;i<=j;){
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main() {
    char name[100];
    cin >> name;
    cout << name << endl;
    reverseCharArray(name);
    cout << "Reversed array is: " << name << endl;
}
