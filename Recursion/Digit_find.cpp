#include <iostream>
using namespace std;

void printDigits(int n){
    if (n == 0){
        return;
    }

    printDigits(n/10);
    
    int digits = n%10;

    cout << digits << " ";

      
}

int main(int argc, char const *argv[])
{
    int n = 647;

    printDigits(n);
    return 0;
}
