#include <stdio.h>

int main()   
{
    int choice, num1, num2;
   do{

    printf("----- Welcome to My Calculator -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5.Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (choice == 1)
    {
        printf("The sum is %d\n", num1 + num2);
    }
     if(choice == 2){
    printf("The difference is %d\n", num1 - num2);
    }
     if (choice == 3)
    {
        printf("The product is %d\n", num1 * num2);
    }
     if (choice == 4)
    {
        printf("The quotient is %d\n", num1 / num2);
    }
    if(choice==5){
        printf("Program terminated\n");
    }
    if(choice==5){
        printf("Invalid choice\n");
    }
   }while(choice !=5);
    printf("------END------");

    return 0;
}
