#include<stdio.h>
#include<stdlib.h>
void push();//function to push element into stack
void pop();//function to pop element from stack
void display();//function to print elements of stack
struct node//initialization of structure
{
  int val;
  struct node *next;//next pointr variable
};
struct node *head;//pointer vaiable of top element
void push()//function to push element into stack
{
  int val;
  struct node ptr=(struct node)malloc(sizeof(struct node));//dynamic memory allocation
  if(ptr==NULL)
    printf("\nNot able to push the element\n");
  else
  {
    printf("Enter the value\n");
    scanf("%d",&val);
    if(head==NULL)
    {
      ptr->val=val;//pushin next value
      ptr->next=NULL;//setting next node top have previous value
      head=ptr;//equating head to new structure
    }
    else
    {
      ptr->val=val;
      ptr->next=head;
      head=ptr;
    }
    printf("Item pushed\n");
  }
}
void pop()//function to pop element from stack
{
  int item;
  struct node *ptr;
  if(head==NULL)
  printf("Underflow\n");
  else
  {
    item=head->val;//assigmimg head value to new item
    ptr=head;//assigning head top pointer
    head=head->next;//element below top becomes new head
    free(ptr);//deleting the item
    printf("Item popped\n");
  }
}
void display()//function to print elements of stack
{
  int i;
  struct node *ptr;
  ptr=head;
  if(ptr==NULL)
  {
    printf("Stack is empty\n");
  }
  else
  {
    printf("\nPrinting stack ele: ");
    while(ptr!=NULL)
    {
      printf("%d\n",ptr->val);
      ptr=ptr->next;
    }
  }
}
void main()//main function
{
  int choice,value;
  while(1)//infinite loop tales input from user till terminted
  {
    printf("\n***MAIN MENU*\n\n");
    printf("ENETR THE NUMBER\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    scanf("%d",&choice);//input from user to call function
    switch(choice)//to call corresponding function based on input
    {
      case 1:push();//fucntion call to insert element
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
