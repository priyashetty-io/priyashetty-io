#include<stdio.h>
int main(){
    int numbers[5];
    int newData;
    int index;
    

    
    for (int i = 0; i < 4; i++)
    {
        printf("Input %d array element",i+1);
        scanf("%d", &numbers[i]);
    }
    printf("Enter the new element: ");
    scanf("%d", &newData);

    printf("Enter array index value: ");
    scanf("%d", &index);
    
    //insertion process to inserst 'newData' at index 'index'
    numbers[4]=numbers[3];
    numbers[3]=numbers[2];
    numbers[2]=newData;

   for (int i=0;i<5;i++){
    printf("%d\n", numbers[i]);
   }

    




}