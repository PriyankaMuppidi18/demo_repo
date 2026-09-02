#include<stdio.h>

void main()
{
  int day;
  printf("Enter day of the week (between 1-7): ");
  scanf("%d", &day);

  if (day == 1)
  {
    printf("It is Monday");
  }
  else if(day == 2)
  {
    printf("It is Tuesday");
  }
  else if(day == 3)
  {
    printf("It is Wednesday");
  }
  else if(day == 4)
  {
    printf("It is Thursday");
  }
  else if(day == 5)
  {
    printf("It is Friday");
  }
  else if(day == 6)
  {
    printf("It is Saturday");
  }
  else if(day == 7)
  {
    printf("It is Sunday");
  } 
}