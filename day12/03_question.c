#include <stdio.h>
void fibonacci(int a)
{
 int b = 0, c = 1, d, i;
for(i = 1; i <= a; i++)
{
  printf("%d ", b);
 d = b + c;
 b = c;
 c = d;
 }
}
int main()
{
 int a;
printf("Enter number of terms: ");
scanf("%d", &a);
 fibonacci(a);
 return 0;
}