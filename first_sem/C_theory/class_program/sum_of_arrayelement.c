#include<stdio.h>


int get_array_sum(int number[]){
    int sum=0;
    for(int i=0;i<5;i++){
         sum=sum + number[i];
    }
    return sum;

}
int main(){

    int mynumber[5];
    //array initialization
    for (int i = 0; i < 5; i++)
    {
         printf("Enter the %d number: ",i+1 );
         scanf("%d",&mynumber[i]);


    }
    //calculate the sum and returns sum
    int total=get_array_sum(mynumber);
    printf("The sum is %d", total);

    
   

}