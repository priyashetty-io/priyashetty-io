//c program to get the sum of numbers from 5 to N.
//Enter N value:10
//please Enter N greater than 5
//Sum of numbers from 5 to 10 is ---

#include<stdio.h>
int main(){
    int N, sum = 0;
    
    printf("C Program to get the sum of numbers from 5 to N\n");
    printf("Enter N value:");
    scanf("%d",&N);
    if (N<=5){
        printf("please enter N greater than 5\n");
    }else{
        for (int i = 5; i<=N; i++){
            sum+=i;
        }
    printf("Sum of numbers from 5 to %d is %d\n",N,sum);
    return 0;
    }
}