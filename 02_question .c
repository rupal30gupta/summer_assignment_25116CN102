#include <stdio.h>
int main()
{
 int first, last, num, i, count;
  printf("Enter first number ");
 scanf("%d", &first);
 printf("Enter last number");
 scanf("%d", &last);
 printf("Prime numbers are\n");
 for (num = first; num <= last; num++)
 {
 if (num < 2)
  continue;
 count = 0;
 for (i = 2; i < num; i++)
 {
 if (num % i == 0)
 {
 count++;
  break;
}
}
  if (count == 0)
  printf("%d ", num);
 }
 return 0;
}