#include <stdio.h>
int main()
{
int a, b, c, n;
 printf("Enter rows ");
 scanf("%d", &n);
 for(a = n; a >= 1; a--)
{
 for(b = 1; b <= n - a; b++)
 printf(" ");
for(c = 1; c <= 2 * a - 1; c++)
 printf("*");
 printf("\n");
}
return 0;
}