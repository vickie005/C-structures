// C structures
#include <stdio.h> //scanf()printf()
#include <string.h> //strcpy()
struct book{
	char tittle[30];
	char author[30];
	int publication_year[5];
	char ISBN[13];
	float price[10];
} book;

int main(){
	//struct book;
	//strcpy(book.tittle ,"Introduction to C programing");
	printf("enter the book tittle:\n");
	scanf("%s",& book.tittle);
	//strcpy(book.author ,"John Smith");
	printf("enter the author:\n");
	scanf("%s", &book.author);
	//strcpy(book.publication_year ,"2022");
	printf("enter publication year:\n");
	scanf("%d", &book.publication_year);
	//strcpy(book.ISBN ,"9780131103627");
	printf("enter ISBN:\n");
	scanf("%s", &book.ISBN);
	//strcpy(book.price ,"49.99");
	printf("enter the price:\n");
	scanf("%d", &book.price);

	
	printf("tittle:%s \n",book.tittle);
	printf("author:%s \n", book.author);
	printf("publication_year: %d \n", book.publication_year);
	printf("ISBN:%s \n", book.ISBN);
	printf("price:%d \n", book.price);
	
	return 0;
}