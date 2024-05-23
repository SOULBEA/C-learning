// Q1. WRITE A PROGRAM TO ENTRE PRICE OF 3 ITEMS AND PRINT THEIR FINAL COAST WITH GST

#include<stdio.h>

int main(){
    float price[3];
    printf("Enter price of item 1: ");
    scanf("%f", &price[0]);

    printf("Enter price of item 2: ");
    scanf("%f", &price[1]);

    printf("Enter price of item 3: ");
    scanf("%f", &price[2]);

    float gst = price[0]+(0.18*price[0]) + price[1]+(0.18*price[1]) + price[2]+(0.18*price[2]);
    printf("%f", gst);
    /* IN THIS PROGRAM WE ARE ASKING FOR THE INPUT FROM THE USER OR THE CASIER AND THEN 
    CALCULATING GST AND RETURNING THE ACTUAL AMOUNT AFTER ADDING UP THE GST.*/
    return 0;
}
