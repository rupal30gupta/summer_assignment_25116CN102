#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int choice;
printf("Enter a string");
fgets(str, sizeof(str), stdin);
printf("\n===== String Operations =====\n");
printf("1. Find Length\n");
printf("2. Reverse String\n");
printf("3. Convert to Uppercase\n");
printf("Enter your choice");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Length = %d", strlen(str) - 1);
break;
case 2:
{
int i;
printf("Reversed String");
 for(i = strlen(str) - 2; i >= 0; i--)
{
printf("%c", str[i]);
}
break;
}
case 3:
{
int i;
for(i = 0; str[i] != '\0'; i++)
{
if(str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
printf("Uppercase String %s", str);
break;
}
default:
printf("Invalid Choice");
}
return 0;
}