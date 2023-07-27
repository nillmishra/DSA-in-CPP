#include <stdio.h>

int fibo(int);

void main()
{
    int n, v;
    puts("Enter how long do you want to point");
    scanf("%d", &n);
    for(int i =0; i<= n; i++){
        v = fibo(i);
        printf("%d \t", v);
    }
}

int fibo (int x)
{
    if (x ==0) return 0;
    if (x ==1) return 1;
    else
    return (fibo(x-1) + fibo(x-2));
}

