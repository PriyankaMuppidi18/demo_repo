//Code that passes an array to function and returns sum of values in an array.
#include<stdio.h>

int calculate_sum(int numbers[5]);

void main()
{
  int numbers[5];
  for(int i = 0; i < 5; i++)
  {
    printf("Enter value %d: \n", i + 1);
    scanf("%d", &numbers[i]);
  }
  int ans = calculate_sum(numbers);
  printf("Their sum is: %d", ans);
}

int calculate_sum(int numbers[5])
{
  int sum = 0;
  for(int i = 0; i < 5; i++)
  {
    sum = sum + numbers[i];
  }
  return sum;
}