#include<iostream>
using namespace std;
int main()
{
    int amount;
    int rs100, rs50, rs20, rs10, rs1;
    cout << "Enter the amount: ";
    cin >> amount;
    switch(1){
        case 1:
        rs100 = amount/100; //quoitent
        amount = amount%100; //remainder
        cout << "Rs 100-->" << rs100<< endl;
        case 2:
        rs50 = amount/50;
        amount = amount%50; 
        cout << "Rs 50-->" << rs50<< endl;
        case 3:
        rs20 = amount/20;
        amount = amount%20; 
        cout << "Rs 20-->" << rs20<< endl;
        case 4:
        rs10 = amount/10;
        amount = amount%10; 
        cout << "Rs 10-->" << rs10<< endl;
        case 5:
        rs1 = amount/1;
        amount = amount%1; 
        cout << "Rs 1-->" << rs1<< endl;


    }
} 