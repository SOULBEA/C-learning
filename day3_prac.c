// PRACTICE SET - WRITE A PROGRAM TO CALCULATE AREA OF SQUARE  USING INPUT ENTERED BY THE USER

#include<stdio.h>
#include<math.h>

int main(){
    int x; 
    printf("Enter the value of x to calculate the area of sq : ");
    scanf("%d", &x);
    int area_sq = x*x;
    printf("the value = %d \n", area_sq);

    // allternative:

    float y;
    printf("enter the value of y to calculate the area of sq : ");
    scanf("%f", &y);
    float _area_square = pow(y,2);
    printf("area = %f", _area_square);

    return 0;
}

