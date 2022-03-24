#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};



void displayListoperations();
void insertIntoList(struct node **head, int data);
void displayListContent(struct node *head);


void displayListContent(struct node* head)
{
	
		printf("traversing list\n");
		while(head != NULL)
		{	
			printf("%d ->",head->data);
			head=head->next;

		}

}

void insertIntoList(struct node **head,int data)
{	
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode != NULL)
	{	
		newnode->next=NULL;
		newnode->data=data;

		if(*head != NULL)
		{	
			struct node *temp=*head;
			while(temp->next)
			{
				temp=temp->next;
			}
		
			temp->next=newnode;
			printf("new node inserted at end\n");

		}else{

			printf("Head is null , first node\n");		
			*head=newnode;
		}
		


		free(newnode);
		return;

	}
}

void displayListoperations()
{
	printf("1. Insert data into list.\n");
	printf("2. Display list data.\n");
	printf("3. Exit.\n");
}

int main()
{
	int choice;
	int data;
	struct node *head=NULL;

	do
	{
		displayListoperations();
		printf("choose the operation to perform from above list: integer value\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter the data you want to insert into list:\n");
				scanf("%d",&data);
				insertIntoList(&head,data);
				break;
			case 2:
				printf("List content:\n");
			//	displayListContent(head);
				break;
			default:
			printf("Wrong choice enter , please enter correct choice from above option.\n");
		}


	}while(choice!=2);

 	return 0;
}
