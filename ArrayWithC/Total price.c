//Write a program of enter price of three items and print their final cost with gst (18%).
#include<stdio.h>
int main(){

    float price[3];

    printf("price1 : ");
    scanf("%f",&price[0]);
    printf("price2 : ");
    scanf("%f",&price[1]);
    printf("price3 : ");
    scanf("%f",&price[2]);

    printf("The final prices : \n");
    printf("price1 = %f\n",price[0]+price[0]*(0.18));
    printf("price2 = %f\n",price[1]+price[1]*(0.18));
    printf("price3 = %f",price[2]+price[2]*(0.18));

return 0;
}
