#include <iostream>
using namespace std;

int Q[5], f = -1, r = -1;
#define mQ 4

void Q_ins(int);
int Q_del();
void display()
{
    for (int i = r; i>0; i--)
    {
        cout << Q[i] << endl;
    }
}

void Q_ins(int o)
{
    if (r == mQ - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        if (r < 0)
        {
            r = 0;
            f = 0; // Initialize front index when inserting the first element
        }
        r = r + 1;
        Q[r] = o;
    }
    display();
}

int Q_del()
{
    if (f < 0)
    {
        cout << "Underflow" << endl;
        return -1; // Return -1 to indicate underflow
    }
    else
    {
        int val = Q[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = f + 1;
        }
        return val;
    }
    display();
}

int main()
{
    int op, it, v;
    while (true) // Changed while condition from while(100) to while(true)
    {
        cout << "1. Q_ins\n2. Q_del\n3. Exit\n";
        cout << "Enter your option: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Enter item to insert: ";
            cin >> it;
            Q_ins(it);
            break;

        case 2:
            v = Q_del();
            if (v >= 0)
            {
                cout << v << " is deleted\n";
            }
            break; // Moved break outside of if statement

        case 3:
            exit(0);
            break;

        default:
            cout << "Invalid option.\n";
        }
    }
    return 0; // Added return statement
}

