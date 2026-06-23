#include <stdio.h>
#include <string.h>
int main()
{
 char a[100];
 int b, c;
 int d = 1;
 printf("Enter a word: ");
 scanf("%s", a);
 b = strlen(a);
for(c = 0; c < b / 2; c++)
 {
 if(a[c] != a[b - c - 1])
{
  d = 0;
 break;
}
 }
 if(d == 1)
 {
 printf("Palindrome String");
 }
 else
{
 printf("Not a Palindrome String");
 }
return 0;
}