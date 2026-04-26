#include<stdio.h>
int main(){

    int age = 22;
    int *ptr = &age;

    // Print value at address
    printf("The value at age = %d\n",age);
    printf("The value at ptr = %d\n",*ptr);
    printf("The value at address of age = %d\n",*(&age));

return 0;
}
