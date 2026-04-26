//print marks of two students of three numbers
#include<stdio.h>
int main(){

    int marks[2][3];

    //1st student
    marks[0][0]=98;
    marks[0][1]=99;
    marks[0][2]=97;

    //2nd student
    marks[1][0]=96;
    marks[1][1]=95;
    marks[1][2]=94;

    //1st student
    printf("%d\n", marks[0][0]);
    printf("%d\n", marks[0][1]);
    printf("%d\n", marks[0][2]);

    printf("\n");

    //2nd student
    printf("%d\n", marks[1][0]);
    printf("%d\n", marks[1][1]);
    printf("%d\n", marks[1][2]);


return 0;
}
