#include <stdio.h>
int perfect(int a)
{
int b, c = 0;
for(b = 1; b < a; b++)
 {
 if(a % b == 0)
 {
 c = c + b;
 }
 }
if(c == a)
 return 1;
 else
 return 0;
}
int main()
{
int a;
 printf("Enter a number: ");
scanf("%d", &a);
 if(perfect(a))
printf("Perfect Number");
else
 printf("Not a Perfect Number");
 return 0;
}