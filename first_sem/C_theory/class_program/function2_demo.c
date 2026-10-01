#include<stdio.h>
int rollno,sum;
float Maths,Python,DBMS,c_fundamental,English;
float average;

void getStudentData(){
    printf("Enter rollnumber");
    scanf("%d,&rollno");
}
int getTotal(){
    sum=Maths+English;
    
}
float getAverage(){
    average=sum/2;

}
void displayStudentDetails(){
    printf("Roll No: %d",rollno);
}

int main (){
    getStudentData();  //collect student data
    getTotal();        //calculate total of 5 subject marks
    getAverage();      //calculate average mark
    //getCGPA();         //to get CGPA
    displayStudentDetails();    //to display student details

}

    
