#include<Stdio.h>
#include<stdlib.h>

struct myArray{
    int tot_size;
    int used_size;
    int *ptr;
};
//int is a primitive datatype
void createarray(struct myArray * a,int tsize, int usize)//abstract data type 
{
    (*a).tot_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int *)malloc(tsize*sizeof(int));
}
void 

int main(){
    struct myArray marks;
    createarray(&marks, 100, 20);//int *x = &a
    return 0;
}