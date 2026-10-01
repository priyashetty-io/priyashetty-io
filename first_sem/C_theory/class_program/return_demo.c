#include<stdio.h>
int rollno,sum;
float Maths,Python,DBMS,c_fundamental,English;
float average;
float CGPA;


void getStudentData(){
    printf("Enter rollnumber");
    scanf("%d,&rollno");
}
int getTotal(){
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
 
    sum=Maths+English;

    
}
float getAverage(){
    average=sum/2;
    

}
void getCGPA(){
    CGPA= average / 9.5;
    
}
//void displayStudentDetails(){
  //  printf("Roll No: %d",rollno);
//}

int main (){
    getStudentData();  //collect student data
    float total=getTotal();        //calculate total of 5 subject marks
    float Average=getAverage();      //calculate average mark
    getCGPA();         //to get CGPA
    //displayStudentDetails();    //to display student details

    printf("The total is: %d.2f",total);
    printf("The average is: %f.2f",average);
    printf("The CGPA is: ",CGPA);

}


    
