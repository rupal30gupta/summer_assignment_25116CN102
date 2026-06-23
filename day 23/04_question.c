#include <stdio.h>
int main()
{
 char a[100];
 int b, c;
int d = 0;
 char e;
 printf("Enter a string ");
scanf("%s", a);
 for(b = 0; a[b] != '\0'; b++)
 {
int count = 0;
 for(c = 0; a[c] != '\0'; c++)
 {
 if(a[b] == a[c])
 {
count++;
}
 }
 if(count > d)
 {
 d = count;
 e = a[b];
}
 }
printf("Maximum occurring character = %c", e);
 return 0;
}