#include <stdio.h>
int main()
{
int arr[100], size, i, j;
int maxCount = 0, element;
 printf("Enter size of array ");
scanf("%d", &size);
 printf("Enter array elements:\n");
for(i = 0; i < size; i++)
{
 scanf("%d", &arr[i]);
}
for(i = 0; i < size; i++)
{
int count = 0;
 for(j = 0; j < size; j++)
{
if(arr[i] == arr[j])
 {
count++;
}
}
if(count > maxCount)
{
 maxCount = count;
 element = arr[i];
}
}
 printf("Element with maximum frequency = %d\n", element);
 printf("Frequency = %d", maxCount);
return 0;
}