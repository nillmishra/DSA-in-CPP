#include <iostream>
using namespace std;
#define ms 4
void push();
int pop();
int s[ms], t= -1;

void display()
{
    cout <<"\n Stack contains \n";
    for(int i=t; i>=0; i--)
    cout << s[i] <<" " <<endl;
}
void push(int x){
    if(t == ms){
        cout<<"\n Overflow\n";
    }
    else{
        t = t+1;
        s[t] = x;
    }
    display();
}

int pop(){
    if(t< 0){
        cout<<"\n Underflow\n";
    }
    else{
        int v=s[t];
        t=t-1;
        display();
        return v;
    }
}


int main()
{
    int op,it,v;
    while(100){
        cout<<"\n 1. Push\n 2. Pop\n 3. Exit\n Enter the option : ";
        cin>>op;
        switch(op)
        {
            case 1:
            cout <<"enter the item to push: ";
            cin >> it;
            push(it);
            break;

            case 2:
            v =pop();
            if(v>0)
            {
                cout<<"\n"<< v <<" is pop from the stack";
            }
            break;

            case 3:
            exit(0);
            default:
            cout << "Invalid option.\n";
        }
    }

}

