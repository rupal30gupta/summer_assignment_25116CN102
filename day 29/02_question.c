#include <stdio.h>
int main()
{
int arr[20];
int n, i, choice, sum = 0;
printf("Enter size of array ");
scanf("%d", &n);
printf("Enter array elements\n");
for(i = 0; i < n; i++)
 {
scanf("%d", &arr[i]);
}
 printf("\n===== Array Operations =====\n");
 printf("1. Display Array\n");
 printf("2. Find Sum\n");
 printf("3. Find Maximum\n");
printf("Enter your choice ");
 scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Array Elements ");
 for(i = 0; i < n; i++)
  {
printf("%d ", arr[i]);
 }
 break;
case 2:
for(i = 0; i < n; i++)
{
sum = sum + arr[i];
}
printf("Sum = %d", sum);
 break;
case 3:
 {
int max = arr[0];
for(i = 1; i < n; i++)
{
if(arr[i] > max)
 {
max = arr[i];
}
}
printf("Maximum Element = %d", max);
break;
}
default:
printf("Invalid Choice");
}
return 0;
}