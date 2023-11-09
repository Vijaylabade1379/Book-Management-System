#include"book.h"
void bookstore(book* arr,int t)
{
	int i;
	for(i=0;i<t;i++)
	{
		printf("\n\n-----------Enter the book---------------");
		printf("\n Enter the Bookunique id :");
		scanf("%d",&arr[i].bid);
		printf("\n Enter the Book name :");
		scanf(" %[^\n]",&arr[i].bname);
		printf("\n Enter the author name :");
		scanf(" %[^\n]",&arr[i].author);
		printf("\n Enter the language :");
		scanf(" %[^\n]",&arr[i].language);
		printf("\n Enter the catagory :");
		scanf(" %[^\n]",&arr[i].catagory);
		printf("\n Enter the publication :");
		scanf(" %[^\n]",&arr[i].publication);
		printf("\n Enter the pages :");
		scanf("%d",&arr[i].pages);
		printf("\n Enter the edition :");
		scanf("%d",&arr[i].edition);
		printf("\n Enter the rating 5 OutOf :");
		scanf("%d",&arr[i].rating);
		printf("\n Enter the Price :");
		scanf("%lf",&arr[i].price);
		printf("\n\n------------------------------------------");
	}	
}
void add(book* arr,int* t)
{
	int i=*t;
		printf("\n\n-----------Enter the bookvalue---------------");
		printf("\n Enter the Bookunique id :");
		scanf("%d",&arr[i].bid);
		printf("\n Enter the Book name :");
		scanf(" %[^\n]",&arr[i].bname);
		printf("\n Enter the author name :");
		scanf(" %[^\n]",&arr[i].author);
		printf("\n Enter the publication :");
		scanf(" %[^\n]",&arr[i].publication);
		printf("\n Enter the language :");
		scanf(" %[^\n]",&arr[i].language);
		printf("\n Enter the catagory :");
		scanf(" %[^\n]",&arr[i].catagory);
		printf("\n Enter the pages :");
		scanf("%d",&arr[i].pages);
		printf("\n Enter the edition :");
		scanf("%d",&arr[i].edition);
		printf("\n Enter the rating 5 OutOf :");
		scanf("%d",&arr[i].rating);
		printf("\n Enter the Price :");
		scanf("%lf",&arr[i].price);
		printf("\n\n------------------------------------------");
		printf("\n Book Added sucessfully...");
		*t=*t+1;	
}
void bookdisplay(book* arr,int t)
{
	int i;
	for(i=0;i<t;i++)
	{
		printf("\n\n---------------Display Book Data--------------");
		printf("\n UniqueBookid :%d",arr[i].bid);
		printf("\n BookName :%s",arr[i].bname);
		printf("\n Authorname :%s",arr[i].author);
		printf("\n Publication :%s",arr[i].publication);
		printf("\n Language :%s",arr[i].language);
		printf("\n catagory :%s",arr[i].catagory);
		printf("\n Pages :%d",arr[i].pages);
		printf("\n Edition :%d",arr[i].edition);
		printf("\n rating :%d",arr[i].rating);
		printf("\n price :%.2lf",arr[i].price);
		printf("\n\n--------------------------------------------");	
	}
}
void search(book* arr,int t,int f)
{
	int i ;
	int flag=0;
	for(i=0;i<t;i++)
	{
		if(f==arr[i].bid)
		{
			printf("\n\n-------------Book is avialable--------------");
			printf("\n UniqueBookid :%d",arr[i].bid);
			printf("\n BookName :%s",arr[i].bname);
			printf("\n Authorname :%s",arr[i].author);
			printf("\n Publication :%s",arr[i].publication);
			printf("\n Language :%s",arr[i].language);
			printf("\n catagory :%s",arr[i].catagory);
			printf("\n Pages :%d",arr[i].pages);
			printf("\n Edition :%d",arr[i].edition);
			printf("\n rating :%d",arr[i].rating);
			printf("\n price :%.2lf",arr[i].price);
			flag++; 
		}	
	}
	if(flag==0)
	{
		printf("\n Book is Not Present in Book store....");
		printf("\n--------------------------------------");
	}
	

}
void update(book* arr,int t,int f)
{
	int i ,flag=1;
	int ch;
	do
	{
		for(i=0;i<t;i++)
		{
			if(f==arr[i].bid)
			{
				printf("\n which attribute Value you want to change :");
				printf("\n 1. name \n 2.Authorname \n 3.Publication \n 4.price \n 5.Pages \n 6.Edition \n 7.rating \n 8.Language \n 9.catagory \n 0.Exit");
				printf("\n Enter the Choice :");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						printf("\n Enter the Book name :");
						scanf(" %[^\n]",&arr[i].bname);
						flag++;
						break;
					case 2:
						printf("\n Enter the author name :");
						scanf(" %[^\n]",&arr[i].author);
						flag++;
						break;
					case 3:
						printf("\n Enter the publication :");
						scanf(" %[^\n]",&arr[i].publication);
						break;
					case 4:
						printf("\n Enter the Price :");
						scanf("%lf",&arr[i].price);
						flag++;
						break;
					case 5:
						printf("\n Enter the pages :");
						scanf("%d",&arr[i].pages);
						flag++;
						break;
					case 6:
						printf("\n Enter the edition :");
						scanf("%d",&arr[i].edition);
						flag++;
						break;
					case 7:
						printf("\n Enter the rating 5 OutOf :");
						scanf("%d",&arr[i].rating);
						flag++;
						break;
					case 8:
						printf("\n Enter the language :");
						scanf(" %[^\n]",&arr[i].language);
						flag++;
						break;
					case 9:
						printf("\n Enter the catagory :");
						scanf(" %[^\n]",&arr[i].catagory);
						flag++;
						break;	
					case 0:
						flag=0;
						printf("\n EXIT");
						break;
					default :
						flag=0;
						printf("\n Plz Enter the Valid Choice.....");
						printf("\n----------------------------------");	
				}
				if(flag>1)
				{
					printf("\n Record Update Sucessfully.........");
					printf("\n---------------------------------------------");
				}
			}
		}
		if(flag==1)
		{
			printf("\n Record Not Fond........");
			printf("\n------------------------------------------------");
		}
	}while(ch!=0);
}
void deleteid(book* arr,int id,int* n)
{
	int flag=0;
	int i;
	int j;
	for(i=0;i<*n;i++)
	{
		if(arr[i].bid==id)
		{
			flag=1;
			j=i;
			for(i=j;i<*n;i++)
			{
				arr[i]=arr[i+1];
			}
		}
	}
	if(flag!=0)
	{
		*n=*n-1;
		printf("\n Book Deleted successfully.... ");
	}
	else
	{
		printf("\n Record not fount..........");
	}
}
void toprating(book* arr,int t)
{
	int i;
	int j;
	book temp;
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(arr[i].rating < arr[j].rating)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}		
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\n UniqueBookid :%d",arr[i].bid);
		printf("\n BookName :%s",arr[i].bname);
		printf("\n Authorname :%s",arr[i].author);
		printf("\n Publication :%s",arr[i].publication);
		printf("\n Language :%s",arr[i].language);
		printf("\n catagory :%s",arr[i].catagory);
		printf("\n Pages :%d",arr[i].pages);
		printf("\n Edition :%d",arr[i].edition);
		printf("\n rating :%d",arr[i].rating);
		printf("\n price :%.2lf",arr[i].price);
		printf("\n\n----------------------------");		
	}
}

