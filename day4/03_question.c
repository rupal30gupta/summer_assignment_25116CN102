#include <stdio.h>
#include <math.h>
int main() {
int num, temp, rem, count = 0, total = 0;
 printf("Enter a number");
 scanf("%d", &num);
 temp = num;
while (temp != 0) {
 temp = temp / 10;
 count++;
 }
 temp = num;
while (temp != 0) {
 rem = temp % 10;
 total = total + pow(rem, count);
 temp = temp / 10;
 }
if (total == num)
printf("%d is an Armstrong number.\n", num);
 else
printf("%d is not an Armstrong number.\n", num);
return 0;
}