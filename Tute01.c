/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>


int main(void) {

  int mark1=0,mark2=0;
  float avg=0.0f;
  printf("Enter marks of subject 1 :");
  if(scanf("%d",&mark1)==1)
  {
   printf("\nEnter marks of subject 2 :");
    if(scanf("%d",&mark2)==1)
    {
        avg=(mark1+mark2)/2;
   printf("\nAverage : %f",avg);
    }
    
  }
   


  return 0;
}

