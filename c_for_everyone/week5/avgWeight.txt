#include<stdio.h>

int *read_ints (const char* file_name)
{
  static int arr[999];
  FILE* file = fopen (file_name, "r");
  int i = 0;
  int count =0;
  fscanf (file, "%d", &i);
  while (!feof (file))
    {
      arr[count] = i; 
      fscanf (file, "%d", &i);
      count++;
    }
  fclose (file);

  return arr;
}

double avg(int arr[999]){
    double sum =0;
    for(int i=0;i<1000;++i){
        sum += arr[i];
    }
    return sum/999;
}

int main(void){
    int *wArr;
    wArr = read_ints("elephant_seal_data"); 
    printf("%lf",avg(wArr));
    return 0;
}
