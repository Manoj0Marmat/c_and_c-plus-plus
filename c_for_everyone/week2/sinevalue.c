/*
 week 2 assignment 
 prints the sine function for an input x between (0,1)
*/

#include<stdio.h>
#include<math.h>
int main(void){
    double x;
    printf("enter value between (0, 1): ");
    scanf("%lf",&x);
    if(x>=0 && x<=1){
        printf("sine value is: %lf",sin(x));
    }    
}
