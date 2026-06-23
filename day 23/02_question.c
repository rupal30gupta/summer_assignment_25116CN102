#include <stdio.h>
int main()
{
char a[100];
int b, c;
 printf("Enter a string ");
 scanf("%s", a);
for(b = 0; a[b] != '\0'; b++)
 {
for(c = b + 1; a[c] != '\0'; c++)
{
if(a[b] == a[c])
 {
 printf("First repeating character = %c", a[b]);
return 0;
 }
}
}
printf("No repeating character found");
 return 0;
}