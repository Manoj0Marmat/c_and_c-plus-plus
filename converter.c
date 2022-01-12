#include<stdio.h>

int main(void){
    int miles, yard;
    
    printf("Enter miles and yard value\n");
    scanf("%d %d", &miles, &yard);

    double mkm = miles * 1.609344;
    double ykm = yard * 0.0009144;

    printf(" %d miles is %lf km \n %d yard is %lf km ", miles, mkm, yard, ykm); 

    return 0;
}
