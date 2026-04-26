//Increment and decrement pointer.
#include<stdio.h>
int main(){
//integer
printf("Integer:\n\n");

    int age = 22;
    int *ptr = &age;
    printf("Address of age = %u\n",ptr);

    //increment
    ptr++;
    printf("After increment = %u\n",ptr);

    //decrement
    ptr--;
    printf("After decrement = %u\n\n",ptr);

//Floating point
printf("Floating point:\n\n");

    float price = 22.55;
    float *ptr1 = &price;
    printf("Address of price = %u\n",ptr1);

    //increment
    ptr1++;
    printf("After increment = %u\n",ptr1);

    //decrement
    ptr1--;
    printf("After decrement = %u\n\n",ptr1);


//Character
printf("Character:\n\n");

    char name = "Jarin Shova";
    char *ptr2 = &name;
    printf("Address of name = %u\n",ptr2);

    //increment
    ptr2++;
    printf("After increment = %u\n",ptr2);

    //decrement
    ptr2--;
    printf("After decrement = %u\n\n",ptr2);


return 0;
}
