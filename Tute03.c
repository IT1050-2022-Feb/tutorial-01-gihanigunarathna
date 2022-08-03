/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int num=0;
  int sum=0;
  printf("Enter a number : ");
  if(scanf("%d",&num)==1)
  {
      while(num!=0)
        {
          sum+=num;
          num--;
        }
  }
  printf("Sum of the numbers :%d",sum);
  return 0;
}

