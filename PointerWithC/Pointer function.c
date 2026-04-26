//value change with ptr function.
#include<stdio.h>
void square(int n);
void _square(int* n);
int main(){
   int n=5;

   square(n);
   printf("\n");//can't change
   printf("n = %d\n",n);
   _square(&n);//can change the value
   printf("n = %d",n);

return 0;
}
void square(int n){
n=n*n;
printf("The square value of n : %d",n);
}
void _square(int* n){
*n = (*n) * (*n);
printf("The square value of n : %d\n",*n);
}

