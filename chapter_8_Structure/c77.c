//pointers and structures
#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};                
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    //(*ptr).code= 101;     you can also write this as
    ptr->code = 101;
    printf("%d\n",e1.code);
    
    return 0;
}