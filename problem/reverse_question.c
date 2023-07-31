#include<stdio.h>
#include<math.h>
#include<limits.h>

int reverse(int x){
int sum =0;
 int ld =0;
while (x!=0){
    ld = x%10;
    if((sum > INT_MAX/10) || (sum < INT_MIN/10)){
        return 0;
    }
    sum = (sum*10) + ld;
    x = x/10;
}
return sum;
}
int main(int argc, char const *argv[]){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\n%d", reverse(n));
    return 0;
}
