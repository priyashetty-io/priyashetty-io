#include<stdio.h>
int main(){
    // char name1[6]="Priya";
    // printf("Name %s\n", name1);


    // char name[25];
    // printf("Enter your first name: ");
    // scanf("%24s", name);
    // printf("Hello, %s!\n", name);
    


    // char name2[50];
    // printf("Enter your name: ");
    // scanf("%s",name2);
    
    char name3[30];
    printf("Enter your name: ");
    fgets(name3,sizeof(name3),stdin);
    printf("%s\n", name3);


    char word[]="Priya shetty";
    for (int i=0; word[i] != '\0'; i++){
        printf("word[%d] = %c-", i, word[i]);
    }
}