#include<stdio.h>
int main(){
    int Maths,Python,DBMS,total,i;
    float percentage;

//FOR LOOP
    for(i=0;i<3;i++){
    printf("Enter %d Student Details: ",i);
    printf("Maths subject mark: ");
    scanf("%d", &Maths);
    printf("Python subject mark: ");
    scanf("%d", &Python);
    printf("DBMS subject mark: ");
    scanf("%d", &DBMS);
    }


//WHILE LOOP
   i=0;
   while(i<3){
    total = Maths+Python+DBMS;
    percentage=total/3.0;
    i++;
   }

printf("SNO\tMATHA\tPYTHON\tDBMS\tTOTAL\t%-\tRESULT\n");




}