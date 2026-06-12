#include <stdio.h>
int armstrong(int a)
{
 int b = a;
int c = 0;
 int d;
 while(a > 0)
 {
 d = a % 10;
  c = c + (d * d * d);
 a = a / 10;
  }
 if(b == c)
return 1;
  else
 return 0;
}
int main()
{
 int a;
 printf("Enter a number: ");
 scanf("%d", &a);
 if(armstrong(a))
 printf("Armstrong Number");
 else
 printf("Not an Armstrong Number");
 return 0;
}