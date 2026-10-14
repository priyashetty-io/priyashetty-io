#include<stdio.h>
int main(){
    // integer x stores 10
    int x = 10;
    //pointer which stores the address of x
    int *p;
    p= &x;

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);

}