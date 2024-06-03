// write a prgoram to accept marks of student when user enter the marks and store it into an array and print the array in terminal.

#include<stdio.h>

int main(){
    int i, n;
    printf("Please enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("marks of student %d is %d \n",i+1, arr[i]);
    }
    
    return 0;
}