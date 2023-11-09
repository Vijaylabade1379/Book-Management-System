#include <stdio.h>
#include<string.h>
#include <stdlib.h>
typedef struct book
{
	int bid;
	char bname[20];
	char author[20];
	char publication[20];
	char language[20];
	char catagory[20];
	int pages;
	int edition;
	int rating;
	double price;
}book;
void bookstore(book*,int);
void add(book*,int*);
void bookdisplay(book*,int);
void search(book*,int,int);
void update(book*,int,int);
void deleteid(book*,int,int*);
void toprating(book*,int);

