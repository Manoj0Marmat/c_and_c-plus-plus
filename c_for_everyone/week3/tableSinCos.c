#include<stdio.h>
#include<math.h>

void printSinCosValue(void){
     printf("\ni\t sin(i)\t cos(i)\n");
     for(float i=0;i<=10;++i){
          printf("%0.3lf\t %0.3lf\t %0.3lf\n",i/10,sin(i/10),cos(i/10));
      }
};

int main(void){
    printSinCosValue();
    return 0;
}
