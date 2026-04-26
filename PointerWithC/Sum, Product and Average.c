//Write a function to calculate Sum, Product and Average of 2 numbers. Print the average in the main function.
#include<stdio.h>
void doWork(int a, int b, int *Sum, int *Prod, int *Avg);
int main(){

    int a=3,b=5;
    int Sum,Prod,Avg;
    doWork(a, b, &Sum, &Prod, &Avg);
    printf("Sum = %d\nProduct = %d\nAverage = %d\n",Sum,Prod,Avg);


return 0;
}
void doWork(int a, int b, int *Sum, int *Prod, int *Avg){

    *Sum=a+b;
    *Prod=a*b;
    *Avg=(a+b)/2;

}
