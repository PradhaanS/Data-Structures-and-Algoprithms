#include<stdio.h>
#include<stdlib.h>
#define max 100
void enqueue();
void dequeue();
void display();
int front=-1,rear=-1;
int queue[max];//declaration of array
void enqueue()//function to insert element into queue
{
	int item;
	printf("Enter the element\n");
	scanf("%d",&item);
	if(rear==max-1)//to check if queue is full
	{
		printf("overflow\n");
		return;
	}
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=item;
	printf("Value inserted\n");
}
void dequeue()//function to delete element from queue
{
	int item;
	if(front==-1||front>rear)//to  check if queue is empty
	{
		printf("underflow\n");
		return;
	}
	else
	{
		item=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		printf("Value deleted\n");
	}
}
void display()//function to display queue elements
{
	int i;
	if(rear==-1)//to  check if queue is empty
	{
		printf("Empty queue\n");
	}
	else
	{
		printf("Printing values:\n");
		for(i=front;i<=rear;i++)//to print queue elements
		{
			printf("%d\n",queue[i]);
		}
	}
}
int main()//main function
{
  	int choice;
  	while(1)
  	{
   		printf("Select the operation:\n");
    		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n"); 
    		scanf("%d",&choice);//operation input from user
    		switch(choice)
    		{
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			default: printf("Invalid choice\n");
			break;
     		}   
   	}
  	return 0;
} 
