#include <stdio.h>
int main()
{
int a, b, c, n;
printf("Enter rows: ");
 scanf("%d", &n);
 for(a = 1; a <= n; a++)
{
 for(b = 1; b <= n - a; b++)
 printf(" ");
 for(c = 1; c <= a; c++)
printf("%d", c);
 for(c = a - 1; c >= 1; c--)
 printf("%d", c);
printf("\n");
 }
 return 0;
}