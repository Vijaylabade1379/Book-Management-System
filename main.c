#include"book.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int size;
	int ch;
	int id;
	printf("\n Do you want store how many books :");
	scanf("%d",&size);
	book*arr;
	arr=(book*)malloc(sizeof(book)*size);
	printf("\n==========StoreBooks ===============");
	bookstore(arr,size);
	do
	{
		printf("\n===========MENU===============");
		printf("\n 1. Add books. \n 2. display books. \n 3. search Book. \n 4. update Book. \n 5. Delete Book. \n 6. Top 3 Rating book. \n 7. EXIT \n===============================");
		printf("\n Enter the Choice :");
		scanf("%d",&ch);
		int find;
		switch(ch)
		{
			case 1:
				printf("\n======== Add Book========");
				 add(arr,&size);
				 break;
			case 2:
				printf("\n==========Display all Books==============");
				bookdisplay(arr,size);
				break;
			case 3:
				printf("\n=========searching Book=============");
				printf("\n Enter the bookId for search :");
				scanf("%d",&find);
				search(arr,size,find);
				break;
			case 4:
				printf("\n=========Update Book=============");
				printf("\n Enter the bookId for Update :");
				scanf("%d",&find);
				update(arr,size,find);
				break;
			case 5:
				printf("\n=========Delete Book=============");
				printf("\n Enter the id :");
				scanf("%d",&id);
				deleteid(arr,id,&size);
				break;
			case 6:
				printf("\n=========Top 3 Rating Book=============");
				toprating(arr,size); 
				break;
			case 7:
				printf("\n EXIT");
				break;	
			default :
				printf("\n Plz Check MENU and Enter the Valid Digit .........");
		}
	}while(ch!=7);
	free(arr);
	return 0;
}
