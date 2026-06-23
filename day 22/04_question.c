#include <stdio.h>
int main()
{
char a[100];
 int b = 0, c = 0;
printf("Enter a string ");
fgets(a, sizeof(a), stdin);
 while(a[b] != '\0')
 {
 if(a[b] != ' ')
 {
 a[c] = a[b];
c++;
 }
 b++;
}
 a[c] = '\0';
 printf("String without spaces %s", a);
return 0;
}