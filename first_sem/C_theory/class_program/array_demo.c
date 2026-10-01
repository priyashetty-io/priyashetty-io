//pgm to store and display 5 subjects mark
#include<stdio.h>
int main(){
    int my_marks[5];    //integer array of size
    int sub_marks[5];  //declares an array 'sub_marks' with SIZE 5 of 'int' type
    //storing data/array initialization - array_name[index]=data/value;
    sub_marks[0]=80; //stores '80' in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;   //static array initialization
    printf("First subject mark: %d\n",sub_marks[0]);
    printf("Second subject mark: %d\n",sub_marks[1]);
    printf("Third subject mark: %d\n",sub_marks[2]);
    printf("Fourth subject mark: %d\n",sub_marks[3]);
    printf("Fifth subject mark: %d\n",sub_marks[4]);

    for (int i = 0; i < 5; i++)
    {
        
        printf("Enter %d subject mark :[int data] ",i+1);
        scanf("%d", &my_marks[i]); 

        
    }
    

   /* //dynamic initialization of 'my_marks'
    printf("Enter first subject mark:[int data]");
    scanf("%d", &my_marks[0]);     //store in first location

    printf("Enter second subject mark:[int data]");
    scanf("%d", &my_marks[1]);     

    printf("Enter third subject mark:[int data]");
    scanf("%d", &my_marks[2]);     

    printf("Enter fourth subject mark:[int data]");
    scanf("%d", &my_marks[3]);    

    printf("Enter fifth subject mark:[int data]");
    scanf("%d", &my_marks[4]);    

    printf("My sub1 mark: %d\n", my_marks[0]);
    printf("My sub2 mark: %d\n", my_marks[1]);
    printf("My sub3 mark: %d\n", my_marks[2]);
    printf("My sub4 mark: %d\n", my_marks[3]);
    printf("My sub5 mark: %d\n", my_marks[4]);
    */
}