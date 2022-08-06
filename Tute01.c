/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float sub1,sub2,average=0;

  printf("input your marks for subject 1 : ");
  scanf("%f",&sub1);

  printf("input your marks for subject 2 : ");
  scanf("%f",&sub2);

  average=(sub1+sub2)/2.0;

  printf("average of the two subjects is : %.2f ",average);
  
  return 0;
}

