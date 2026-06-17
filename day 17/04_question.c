#include <stdio.h>
int main()
{
int a[50], b[50];
int n1, n2, i, j;
 printf("Enter size");
 scanf("%d", &n1);
printf("Enter values\n");
for(i = 0; i < n1; i++)
 {
 scanf("%d", &a[i]);
}
 printf("Enter size");
 scanf("%d", &n2);
printf("Enter values\n");
for(i = 0; i < n2; i++)
{
 scanf("%d", &b[i]);
 }
printf("Same numbers\n");
for(i = 0; i < n1; i++)
{
for(j = 0; j < n2; j++)
 {
 if(a[i] == b[j])
{
 printf("%d ", a[i]);
 break;
 }
 }
}
return 0;
}