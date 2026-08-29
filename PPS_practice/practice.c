// program to print 5 datatype values taken s input from user
#include <stdio.h>

void main()
{
  int i;
  printf("Enter int: \n");
  scanf("%d", &i);

  float f;
  printf("Enter float(ex:3.21): \n");
  scanf("%f", &f);

  char c;
  printf("Enter a character: \n");
  scanf("%c", &c);

  double d;
  printf("Enter a double (double-precision floating-point numbers): \n");
  scanf("%f", &d);

  char word[15];
  printf("Enter a word: \n");
  scanf("%s", &word);

  printf("Int entered: %i \n", i);
  printf("Float entered: %f \n", f);
  printf("Char entered: %c \n", c);
  printf("Double entered: %d \n", d);
  printf("Word entered: %s \n", word);
}