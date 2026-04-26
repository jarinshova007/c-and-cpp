#include<stdio.h>
int main(){

    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("Value at ptr = %f\n",*ptr);
    printf("Memory address of ptr = %u\n",pptr);

return 0;
}
