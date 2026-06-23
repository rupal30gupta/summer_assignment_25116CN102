#include <stdio.h>
#include <string.h>
int main()
{
char a[100], b[100];
int c[26] = {0};
int d, e = 1;
 printf("Enter first string ");
scanf("%s", a);
 printf("Enter second string ");
 scanf("%s", b);
if(strlen(a) != strlen(b))
 {
 printf("Not Anagram");
 return 0;
 }
for(d = 0; a[d] != '\0'; d++)
 {
 c[a[d] - 'a']++;
c[b[d] - 'a']--;
 }
 for(d = 0; d < 26; d++)
 {
 if(c[d] != 0)
{
 e = 0;
 break;
 }
 }
if(e == 1)
 {
printf("Anagram Strings");
 }
 else
 {
 printf("Not Anagram Strings");
}
 return 0;
}