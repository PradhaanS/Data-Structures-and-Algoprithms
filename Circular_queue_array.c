#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];//declaration of array
int front=-1;  
int rear=-1;
void enqueue(int x)//for inserting value into the queue
{
	if(front==-1 && rear==-1)//to check if queue is empty
	{
		front=rear=0;//to make front and rear 0
		queue[rear]=x;//to insert value at rear
	}
	else if((rear+1)%N==front)//to check if queue is full
	{
		printf("Queue overflow");	
	}
	else
	{
		rear=(rear+1)%N;//if queue is not full
		queue[rear]=x;//insert value at rear
	}
}

int dequeue()
{
	if(front==-1 && rear==-1)//to check if queue is empty
	{
		printf("Queue overflow");
	}
	else if(front==rear)//if only one element exists
	{
		printf("deleted element is%d\n",queue[front]);//delete the element
		front=rear=-1;//queue is empty
	}
	else//if queue has more than 1 element
	{
		printf("deleted element is %d\n",queue[front]);//delete element at front
		front=(front+1)%N;//increment front
	}
}

void display()
{
	int i=front;
	if(front==-1 && rear==-1)//to check if queue is empty
	{
		printf("Queue is empty");
	}
	else
	{
		printf("elements in queue are:\n");
		while(i<=rear)//printing elements from front to rear
		{
			printf("%d\n",queue[i]);
			i=(i+1)%N;//incrementing front
		}
	}
}

int main()//main function
{
	int choice,data;
	while(1)
	{
		printf("enter your choice\n");
		printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the value to be inserted\n");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2:dequeue();
					break;
			case 3:display();
					break;
			case 4:exit(0);
			default:printf("invalid\n");							
		}		
	}
}
