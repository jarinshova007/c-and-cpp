#include<Stdio.h>
int main(){

    int age = 22;
    int *ptr = &age;

    //address
    //printf("The memory address of age is = %p\n",&age); // hexa decimal format
    printf("The memory address of age is = %u\n",&age);//unsigned int format

    //printf("The memory address of age is = %p\n",ptr);
    printf("The memory address of age is = %u\n",ptr);

    //address of ptrprintf
    printf("The memory address of ptr is = %u\n",&ptr);



return 0;
}
