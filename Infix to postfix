#include<stdio.h>
#include<ctype.h>
char stack[20];//array size
int top=-1;
void push(char x)//fucntion to push element to stack
{
  stack[++top]=x;//to push operator
}
char pop()
{
   if(top==-1)
    return -1;
   else
   return stack[top--];
}
int priority(char x)//fucntion to check priority of stack
{
  if(x=='(')
    return 0;
  if(x=='+'||x=='-')
    return 1;
  if(x=='*'||x=='/')
    return 2;
  if(x=='*'||x=='$')
    return 3;
}
int main()//main fucntion
{
  char exp[20];
  char*e;char x;
  printf("Enter the expression\n");
  scanf("%s",exp);//to take intput expression form user
  e=exp;
  while(*e!='\0')//loop till it encounters blank space
  {
    if(isalnum(*e))//to chech alphabet or number
      printf("%c",*e);
    else if(*e=='(')
      push(*e);
    else if(*e==')')
    {
      while((x=pop())!='(')
      printf("%c",x);
    }
    else
    {
      while(priority(stack[top])>=priority(*e))
      printf("%c",pop());
      push(*e);
    }
    e++;
  }
  while(top!=-1)
  {
    printf("%c",pop());
  }
  return 0;
  printf("\n");
}
