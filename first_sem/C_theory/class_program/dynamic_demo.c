//create integer pointer allocate memory dynamically for 5 integer data and display value stored in each location
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    
    p=(int*) malloc(5*sizeof(int));
  // printf("%d\n",p[0]);
  // printf("%d\n",p[1]);
  // printf("%d\n",p[2]);
  // printf("%d\n",p[3]);
  // printf("%d\n",p[4]);



for (int i = 0; i < 5; i++){
        printf("%d\n",p[i]);
    }
    

}