#include <stdio.h>
int main()
{
 char a[100];
int b = 0;
printf("Enter a string");
 fgets(a, sizeof(a), stdin);
while(a[b] != '\0')
  {
  b++;
  }
printf("Length of string = %d", b - 1);
 return 0;
}