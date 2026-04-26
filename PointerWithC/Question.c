//Will the address output be same??(the  correct ans will not be the same)
#include<stdio.h>
void printAddress(int n);
void _printAddress(int *n);
int main(){

    int n=4;
    printf("%u\n",&n);
    printAddress(n);
    _printAddress(&n);


return 0;
}
//call by value
void printAddress(int n){

    printf("%u\n",&n);//should be different

}
//call by reference
void _printAddress(int *n){

    printf("%u\n",n);//should be same


}
