//swap two  numbers
#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main(){

    int x = 5, y = 10;
    swap(x,y);
    printf("x = %d\ny = %d\n",x,y);
    _swap(&x,&y);
    printf("x = %d\ny = %d\n",x,y);

return 0;
}
//call by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d\n",a,b);
}
//call by reference
void _swap(int *a, int *b){

int temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d\nb = %d\n",*a,*b);
}
