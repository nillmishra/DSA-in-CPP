#include <stdio.h>
int fact(int );

void main()
{
    int n, v;
    puts("Enter any +intrger number :");
    scanf("%d", &n);
    v = fact(n);
    printf("%d is the factorial value of %d",v , n);
}
int fact(int x){
    if (x == 0 || x == 1)
    return 1;
    else
    return(x*fact(x-1));
}



