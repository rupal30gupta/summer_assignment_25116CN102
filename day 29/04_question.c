#include <stdio.h>
int main()
{
int productId;
char productName[50];
int quantity;
float price;
printf("===== Inventory Management System =====\n");
printf("Enter Product ID ");
scanf("%d", &productId);
getchar();
printf("Enter Product Name ");
fgets(productName, sizeof(productName), stdin);
 printf("Enter Quantity ");
scanf("%d", &quantity);
printf("Enter Price");
scanf("%f", &price);
printf("\n----- Product Details -----\n");
printf("Product ID    %d\n", productId);
printf("Product Name  %s", productName);
printf("Quantity      %d\n", quantity);
printf("Price         %.2f\n", price);
return 0;
}
