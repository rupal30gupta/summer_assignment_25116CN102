#include <stdio.h>
int main()
{
 char a[100];
int b = 0, c;
 printf("Enter a string ");
fgets(a, sizeof(a), stdin);
while(a[b] != '\0')
{
b++;
 }
 printf("Reversed string");
for(c = b - 2; c >= 0; c--)
 {
 printf("%c", a[c]);
 }
 return 0;
}