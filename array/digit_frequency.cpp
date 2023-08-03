#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int s[10] ={0};
    char o[100000];
    scanf("%s", &o);
    for(int i =0; i<strlen(o); i++){
        int k;
        if(o[i]>='0' && o[i] <= '9'){
        k = o[i]-'0';
        s[k]++;
        }

    }
    for(int i =0; i< 10; i++){
    printf("%d ",s[i]);
    }
    return 0;
}