#include <stdio.h>
int palindrome(int a)
{
 int b = a;
 int c = 0;
while(a > 0)
{
 c = c * 10 + a % 10;
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
if(palindrome(a))
 printf("Palindrome Number");
 else
 printf("Not a Palindrome Number");
 return 0;
}