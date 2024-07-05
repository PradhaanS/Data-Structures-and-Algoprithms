#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int x)//function to insert elements in queue
{
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(rear==NULL && front==NULL)
	{
		front=rear=newnode;
		rear->next=front;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}
}

void dequeue()//function to delete an element from queue
{
	struct node* temp;
	temp=front;
	if(front==NULL && rear==NULL)
	{
		printf("Queue is empty\n");
	}
	else if(front==rear)
	{
		front=rear=NULL;
		free(temp);
	}
	else
	{
		front=front->next;
		rear->next=front;
		free(temp);
	}
}

void display()//function to print the elements of queue
{
	struct node* temp;
	temp=front;
	if(front==NULL && rear==NULL)
	{
		printf("\nQueue is empty");
	}
	else
	{
		do
		{
			printf("\n%d\n",temp->data);
			temp=temp->next;
		}
		while(temp!=front);
	}
}

int main()//main function
{
	int choice,n,i,data;
	printf("enter your choice\n");
	do
	{
		printf("\n1.insertion\n2.display\n3.deletion\n4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the number of data\n");
				scanf("%d",&n);
				printf("Enter your data\n");
				i=0;
				while(i<n)
				{
					scanf("%d",&data);
					enqueue(data);
					i++;
				}
				break;
			case 2:
				display();
				break;
			case 3: dequeue();
				break;
			case 4: exit(0);
			default:printf("\n invalid");
		}
	}
	while(choice!=0);
	return 0;
}
