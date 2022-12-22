#include<stdio.h>//declaring header files
#include<stdlib.h>
#define size 10//size of stack
void push(int value);//function to push element into stack
void pop();//function to pop element from stack
void display();//function to display element of stack
int top=-1;
int stack[size];//initialization of stack
void main()//main function
{
  int choice,value;
  while(1)//infinite loop takes input from user till terminated
  {
    printf("\n***MAIN MENU*\n\n");
    printf("ENETR THE NUMBER\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    scanf("%d",&choice);//input from user to choose function
    switch(choice)//to call corresponding function based on user input
    {
      case 1:printf("enter the element to be pushed");
      scanf("%d",&value);
      push(value);//fucntion call to insert element
      break;
      case 2:pop();//fucntion call to delete element
      break;
      case 3:display();//fucntion call to display elements
      break;
      case 4:exit(0);//fucntion call to terminate program
      default:printf("\nWrong selection!!");
    } 
  } 
}
void push(int value)//function to push element into stack
{
  if(top==size-1)
    printf("Stack is full");
  else
  {
    top++;
    stack[top]=value;
    printf("Element %d is stacked successfully",value);
  }
}
void pop()//function to pop element from stack
{
  if(top==-1)
    printf("Stack is empty");
  else
  {
    printf("\nDeleted: %d",stack[top]);
    top--;
  }
}
void display()//function to print elements of stack
{
  if(top==-1)
  printf("\nStack is empty!!");
  else
  {
    int i;
    printf("Stack elements are: \n");
    for(i=top;i>=0;i--)
    printf("%d\n",stack[i]);
  }
}
