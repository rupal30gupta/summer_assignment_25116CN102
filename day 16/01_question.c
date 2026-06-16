#include <stdio.h>
int main()
{
 int arr[100], size, i;
int total = 0, sum = 0, missing;
printf("Enter how many numbers are present");
scanf("%d", &size);
printf("Enter the array elements\n");
 for(i = 0; i < size; i++)
 {
 scanf("%d", &arr[i]);
sum = sum + arr[i];
}
total = (size + 1) * (size + 2) / 2;
 missing = total - sum;
 printf("Missing number is %d", missing);
return 0;
}