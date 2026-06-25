#include <stdio.h>
int main()
{
int num1[50], num2[50], num3[100];
 int size1, size2;
int i, j, k;
 printf("Enter size of first array ");
 scanf("%d", &size1);
printf("Enter elements of first sorted array\n");
for(i = 0; i < size1; i++)
 {
 scanf("%d", &num1[i]);
 }
printf("Enter size of second array ");
scanf("%d", &size2);
printf("Enter elements of second sorted array\n");
for(i = 0; i < size2; i++)
{
 scanf("%d", &num2[i]);
}
 i = 0;
j = 0;
k = 0;
 while(i < size1 && j < size2)
{
 if(num1[i] < num2[j])
{
num3[k] = num1[i];
 i++;
}
 else
 {
num3[k] = num2[j];
j++;
}
k++;
 }
while(i < size1)
 {
num3[k] = num1[i];
i++;
 k++;
 }
  while(j < size2)
 {
 num3[k] = num2[j];
 j++;
 k++;
}
printf("Merged array\n");
for(i = 0; i < size1 + size2; i++)
{
 printf("%d ", num3[i]);
 }
  return 0;
}