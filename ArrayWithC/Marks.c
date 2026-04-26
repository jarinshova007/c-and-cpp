//Marks of Physics, Chemistry, Math
#include<stdio.h>
int main(){

    int marks[3];

    printf("Enter the mark of Physics : ");
    scanf("%d",&marks[0]);

    printf("Enter the mark of Chemistry : ");
    scanf("%d",&marks[1]);

    printf("Enter the mark of Mathematics : ");
    scanf("%d",&marks[2]);

    printf("Physics = %d, Chemistry = %d, Mathematics = %d",marks[0], marks[1], marks[2]);

return 0;
}
