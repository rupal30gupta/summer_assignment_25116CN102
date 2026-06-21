#include <stdio.h>
int main()
{
 char a[100];
int b = 0;
 printf("Enter a string ");
fgets(a, sizeof(a), stdin);
while(a[b] != '\0')
 {
 if(a[b] >= 'a' && a[b] <= 'z')
 {
 a[b] = a[b] - 32;
 }
 b++;
  }
printf("Uppercase string %s", a);
return 0;
}