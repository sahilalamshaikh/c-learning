#include<stdio.h>
#include <math.h>
int main() {

    double a,b,c; 
    printf("Enter the no \n");
    scanf("%lf",&b);
    printf("enter the power \n");
    scanf("%lf",&c);
    a=pow(b,c);
    printf("%lf to the %lf power is %lf \n",b,c,a);
    return(0);
}