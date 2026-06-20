#include <stdio.h>
int main()
{
 int num1[10][10], num2[10][10], result[10][10];
int rows1, cols1, rows2, cols2;
int i, j, k;
 printf("Enter size of first matrix (rows columns) ");
 scanf("%d %d", &rows1, &cols1);
printf("Enter values for first matrix\n");
 for(i = 0; i < rows1; i++)
 {
for(j = 0; j < cols1; j++)
 {
scanf("%d", &num1[i][j]);
}
 }
 printf("Enter size of second matrix (rows columns)");
 scanf("%d %d", &rows2, &cols2);
 printf("Enter values for second matrix\n");
for(i = 0; i < rows2; i++)
{
 for(j = 0; j < cols2; j++)
 {
 scanf("%d", &num2[i][j]);
 }
 }
if(cols1 != rows2)
 {
 printf("Cannot multiply these matrices.\n");
 return 0;
}
for(i = 0; i < rows1; i++)
{
 for(j = 0; j < cols2; j++)
 {
 result[i][j] = 0;
 for(k = 0; k < cols1; k++)
{
result[i][j] += num1[i][k] * num2[k][j];
}
}
}
printf("Matrix after multiplication\n");
for(i = 0; i < rows1; i++)
{
for(j = 0; j < cols2; j++)
{
printf("%d ", result[i][j]);
}
printf("\n");
}
return 0;
}