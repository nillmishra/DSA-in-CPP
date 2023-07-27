#include <iostream>
using namespace std;

int a[10] = {10, 20, 30, 40, 50, 5, 6, 7, 8, 9};
int size = 10;

void display()
{
    int i;
    cout << "The element are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}
void del()
{
    int k, i, it, fl = 0;
    cout << "enter no to delete: " << endl;
    cin >> it;
    for (i = 0; i <= size; i++)
    {
        if (a[i] == it) //i=k
        {
            fl = 1;
            for (k = i; k < size-1; k++)//k=(it)index no
            { 
                a[k] = a[k + 1]; a[] //a[k] =a[(it)index no]
            }
            break;
        }
        
    }
    if (fl == 0)
    {
        cout << "Sorry" << endl;
    }
    else
    {
        cout << it << " is deleted" << endl;
    }
    display();
}
int main()
{
    display();
    del();
    return 0;
}