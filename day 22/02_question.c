#include <stdio.h>
int main()
{
 char a[100];
 int b = 0, c = 1;
printf("Enter a sentence");
fgets(a, sizeof(a), stdin);
 while(a[b] != '\0')
 {
 if(a[b] == ' ')
 {
 c++;
  }
 b++;
 }
printf("Total words = %d", c);
return 0;
}