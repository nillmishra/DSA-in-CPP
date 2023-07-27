#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ms 4

void push();
int pop();
int s[5], t= -1;

void display()
{
    printf("\n Stack contains \n");
    for(int i=t; i>=0; i--)
    printf("%d \n", s[i]);
}

void main()
{
    int op,it,v;
    while(100){
        printf("\n 1. Push\n 2. Pop\n 3. Exit\n Enter the option");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
            printf("enter the item to push: ");
            scanf("%d", &it);
            push(it);
            break;

            case 2:
            v =pop();
            if(v>0)
            {
                printf("%d is pop from the stack", v);
            }
            break;

            case 3:
            exit(0);
        }
    }

}

void push(int x){
    if(t == ms){
        printf("\n Overflow");
    }
    else{
        t = t+1;
        s[t] = x;
    }
    display();
}

int pop(){
    if(t< 0){
        printf("\n Underflow");
    }
    else{
        int v=s[t];
        t=t-1;
        display();
        return v;
    }
}

