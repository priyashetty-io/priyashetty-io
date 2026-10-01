#include<stdio.h>
int rollno;
float Maths,Python,DBMS,c_fundamental,English;

void getStudentData(){
    printf("Enter rollnumber");
    scanf("%d,&rollno");
}

void getTotal(){
    printf("Maths");
    scanf("%f, &Maths");
    printf("Python");
    scanf("%f, &Python");
    printf("DBMS");
    scanf("%f",&DBMS);
    printf("computer_fundamentals");
    scanf("%f", &c_fundamental);
    printf("English");
    scanf("%f",&English);

    float total= Maths + Python + DBMS + c_fundamental + English;
    printf("getTotal",total);
}

total= Maths , Python , DBMS , c_fundamental , English;
void getAverage(){
    float average = total / 5;
    printf("getAverage",average);
}
float average;
void getCGPA(){

    float getCGPA = average / 9.5;
    printf("CGPA",getCGPA);

}
int main(){
    //declaration

    getStudentData();  //collect student data
    getTotal();        //calculate total of 5 subject marks
    getAverage();      //calculate average mark
    getCGPA();         //to get CGPA
    //displayStudentDetails();    //to display student details

}
