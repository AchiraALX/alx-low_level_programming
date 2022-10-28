#include "head.h"

/**
 * main - typedef
 * 
 * Return: Always (0) Success
*/

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[150];
	int book_id;
} Book;

int main(void)
{
	Book book;

	strcpy(book.title, "C programming");
	strcpy(book.author, "Jacob Achira");
	strcpy(book.subject, "C programming course");
	book.book_id = 89867;

	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book Id : %d\n", book.book_id);

	return (0);
}
