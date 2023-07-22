#include<iostream>
using namespace std;
int main(){
    int a, b, op, r;
    cout <<"Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout <<"Enter your opertaor \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n-->";
    cin >> op;

    switch(op){
        case 1: r = a + b;
        cout << r << " is addition of " << a << " & "<< b <<endl;
        break;

        case 2: r = a - b;
        cout << r << " is subtraction of " << a << " & "<< b <<endl;
        break;

        case 3: r = a*b;
        cout << r << " is mutiplication of " << a << " & "<< b <<endl;
        break;

        case 4: r = a/b;
        cout << r << " is division of " << a << " & "<< b <<endl;
        break;
    }
    return 0;
}