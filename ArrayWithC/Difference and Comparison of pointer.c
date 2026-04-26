#include<stdio.h>
int main(){

    int age = 22;
    int _age = 27;
    int *ptr = &age;
    int *_ptr = &_age;
    //difference
    printf("Difference:\n%u - %u\n= %u\n",ptr, _ptr, ptr-_ptr);//does not show the bite difference,it will show the integer dofference
    //Comparison
    _ptr=&age;
    printf("Comparison = %u\n",ptr==_ptr);//(1 means true, 0 means false), ans will be 1

    return 0;
}
