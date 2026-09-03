#include<stdio.h>

void main()
{
  int numbers[5];
  for(int i = 0, i <= 5, i++)
  {
    printf("Enter value %d: ", i);
    scanf("%d", &numbers[i]);
    calculate_sum(number[5])
  }
}

int calculate_sum(int numbers[5])
{
  int sum = 0;
  for(int i = 0, i <= 5, i++)
  {
    scanf("%d", &numbers[i]);
    sum = sum + numbers[i];
  }
  return sum;
}