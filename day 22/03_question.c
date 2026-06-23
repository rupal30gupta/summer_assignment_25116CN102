#include <stdio.h>
int main()
{
char a[100], b;
int c = 0, d = 0;
 printf("Enter a string ");
fgets(a, sizeof(a), stdin);
 printf("Enter a character: ");
scanf("%c", &b);
 while(a[c] != '\0')
 {
 if(a[c] == b)
{
d++;
 }
 c++;
 }
 printf("Frequency of %c = %d", b, d);
 return 0;
}