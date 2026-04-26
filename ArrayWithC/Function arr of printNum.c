//Make a function of array to count odd numbers
int countOdd(int arr[], int n);
#include<stdio.h>
int main(){
    int arr[]={13, 2, 3, 41, 11, 6};
    printf("%d", countOdd(arr,6));

return 0;
}
int countOdd(int arr[], int n){

    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}
