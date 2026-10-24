#include <stdio.h>   //includes standard input-output library for printf and scanf
#include <stdlib.h>  //includes standard library for dynamic memory functions like malloc and free

int main(){             //main function where program execution begins
    int *p;             // Declares an integer pointer variable
    int sum = 0;        // Initializes sum variable to zero
    p = (int*)malloc(10 * sizeof(int));   // Allocates dynamic memory on the heap for 10 integers

    // Checks whether memory allocation failed(i.e, if malloc returned NULL)
    if(p == NULL){
        printf("Memory allocation failed\n");   //prints an error message if memory is unavailable
        return 1;                               //exits the program with an error status code
    }

    //loops 10 times to get input for each of the 10 elements
    for(int i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);   // Prompts the user to enter a number
        scanf("%d", &p[i]);                    // Stores the entered number directly into allocated memory usintiong pointer index nota
        sum = sum + p[i];                      // adds the newly entered value to the running total sum
    }
    printf("Sum = %d\n", sum);              // Displays the total sum

    free(p);        //releases/frees the dynamically allocated memory back to the system to prevent memory leaks
    return 0;       //indicates that the program executed successfully
}