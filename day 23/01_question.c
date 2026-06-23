#include <stdio.h>
int main()
{
char a[100];
 int b, c, d;
printf("Enter a string ");
scanf("%s", a);
 for(b = 0; a[b] != '\0'; b++)
 {
d = 0;
 for(c = 0; a[c] != '\0'; c++)
{
if(a[b] == a[c])
 {
 d++;
 }
}
if(d == 1)
 {
printf("First non-repeating character = %c", a[b]);
break;
 }
 }
return 0;
}