#include <stdio.h>

int main()
{
 int bookId;
 char bookName[50];
 char author[50];
printf("===== Library Management System =====\n");
printf("Enter Book ID");
scanf("%d", &bookId);
getchar();
printf("Enter Book Name ");
fgets(bookName, sizeof(bookName), stdin);
printf("Enter Author Name: ");
 fgets(author, sizeof(author), stdin);
printf("\n----- Book Details -----\n");
printf("Book ID     : %d", bookId);
printf("\nBook Name   : %s", bookName);
printf("Author Name : %s", author);
 return 0;
}