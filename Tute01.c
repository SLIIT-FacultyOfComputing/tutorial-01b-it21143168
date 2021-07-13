/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>


int main() {
  int x, y, sum=0;
  float avg=0;
  printf("Enter the mark of the first subject:");

  scanf("%d", &x);

printf("Enter the mark of the second subject:");
  scanf("%d", &y);

sum=x+y;
avg= sum/2.0;

printf("The average is:%.2f",avg);

return 0;
}

