#include <stdio.h>
int main()
{
 int a, b, c, d, e;
 printf("Enter two numbers");
 scanf("%d %d", &a, &b);
 printf("Armstrong numbers are\n");
 for (c = a; c <= b; c++)
 {
 d = c;
 e = 0;
 while (d > 0)
 {
 int digit = d % 10;
 e = e + (digit * digit * digit);
 d = d / 10;
 }
 if (e == c)
  {
   printf("%d ", c);
 }
 }
 return 0;
}