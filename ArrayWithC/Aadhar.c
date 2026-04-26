//Read and print the adhar card no of 5 people.
#include<stdio.h>
int main(){

    int aadhar[5];
    int *ptr = &aadhar[0]; // int *ptr = aadhar;
    //scan
    for(int i=0; i<5; i++){
        printf("%d th index : ",i);
        scanf("%d", &aadhar[i]);     // &aadhar[i] = (ptr + i)
    }
        //print
        for(int i=0; i<5; i++){
        printf("%d th index : %d\n", i, aadhar[i]);    //aadhar[i] = *(ptr + i)
    }

        return 0;
}
