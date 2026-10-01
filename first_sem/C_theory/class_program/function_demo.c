#include<Stdio.h>
void add_two_num(int first, int second){      //function definition
    int sum;
    //int first=100;
    //int second=200;
    sum=first+second;
    printf("the sum is %d\n",sum);
}
int main(){
    add_two_num(10,20);
    add_two_num(100,200);
    add_two_num(20,45);
    printf("pgm terminated");
    
}