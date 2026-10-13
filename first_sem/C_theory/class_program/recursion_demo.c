#include<stdio.h>
int factorial (int n){
    if (n == 0){
    return 1;

}
    return n * factorial (n-1);
}

int main(){
    int n=0;
    printf("Enter your Number: ",n);
    scanf("%d", &n);
    printf("%d!=%d\n",n,factorial(n));
    return 0;

}




































 
   
  