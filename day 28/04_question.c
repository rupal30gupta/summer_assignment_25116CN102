#include <stdio.h>
int main()
{
 char name[50];
char phone[20];
char email[50];
printf("===== Contact Management System =====\n");
 getchar();
printf("Enter Name: ");
 fgets(name, sizeof(name), stdin);
printf("Enter Phone Number: ");
fgets(phone, sizeof(phone), stdin);
 printf("Enter Email Address: ");
fgets(email, sizeof(email), stdin);
printf("\n----- Contact Details -----\n");
printf("Name  : %s", name);
printf("Phone : %s", phone);
printf("Email : %s", email);
return 0;
}