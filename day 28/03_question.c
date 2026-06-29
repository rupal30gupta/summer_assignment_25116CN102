#include <stdio.h>
int main()
{
char name[50];
 int ticket;
 float price, total;
 printf("===== Ticket Booking System =====\n");
getchar();
printf("Enter Customer Name ");
fgets(name, sizeof(name), stdin);
printf("Enter Number of Tickets ");
 scanf("%d", &ticket);
printf("Enter Price of One Ticket ");
scanf("%f", &price);
total = ticket * price;
printf("\n----- Booking Details -----\n");
printf("Customer Name : %s", name);
printf("Tickets Booked : %d\n", ticket);
printf("Total Amount : %.2f\n", total);
 return 0;
}