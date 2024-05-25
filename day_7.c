// Q. WRITE A PROGRAM THAT PRINT TABLE IN REVERSE ORDER:

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i  = 10; i; i--)
    {
        int x = i*n;
        printf("%d \n", x);
    }
    return 0;
}
