#include <stdio.h>

int main()
{
    int sum = 0;
    int n = 10;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d , %d\n", i, j);
        }
    }
    return 0;
} //O(n^2)