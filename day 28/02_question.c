#include <stdio.h>

int main()
{
int accountNumber;
char name[50];
 float balance, deposit, withdraw;
 printf("===== Bank Account System =====\n");
printf("Enter Account Number ");
scanf("%d", &accountNumber);
getchar();
 printf("Enter Account Holder Name");
 fgets(name, sizeof(name), stdin);
printf("Enter Current Balance ");
scanf("%f", &balance);
printf("Enter Deposit Amount ");
 scanf("%f", &deposit);
balance = balance + deposit;
printf("Enter Withdraw Amount ");
scanf("%f", &withdraw);
if (withdraw <= balance)
 {
 balance = balance - withdraw;
}
else
{
 printf("Insufficient Balance!\n");
}
printf("\n----- Account Details -----\n");
printf("Account Number : %d\n", accountNumber);
printf("Account Holder : %s", name);
printf("Available Balance : %.2f\n", balance);
return 0;
}