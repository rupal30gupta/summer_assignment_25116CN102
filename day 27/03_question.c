#include <stdio.h>
struct Employee
{
 int id;
char name[50];
 float basicSalary;
 float bonus;
 float totalSalary;
};
int main()
{
struct Employee e[100];
 int n, i;
printf("Enter number of employees ");
scanf("%d", &n);
for(i = 0; i < n; i++)
{
 printf("\nEnter details of Employee %d\n", i + 1);
printf("Enter Employee ID ");
scanf("%d", &e[i].id);
 printf("Enter Employee Name ");
scanf("%s", e[i].name);
 printf("Enter Basic Salary ");
 scanf("%f", &e[i].basicSalary);
 printf("Enter Bonus ");
 scanf("%f", &e[i].bonus);
e[i].totalSalary = e[i].basicSalary + e[i].bonus;
}
printf("\n----- Salary Details -----\n");
for(i = 0; i < n; i++)
{
  printf("\nEmployee %d\n", i + 1);
 printf("Employee ID %d\n", e[i].id);
 printf("Employee Name %s\n", e[i].name);
 printf("Basic Salary %.2f\n", e[i].basicSalary);
 printf("Bonus %.2f\n", e[i].bonus);
printf("Total Salary %.2f\n", e[i].totalSalary);
 }
 return 0;
}