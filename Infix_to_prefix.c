#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
# define MAX 100
int top = -1;
char stack[MAX];
int isFull()// checking if stack is full
{
  return top == MAX - 1;
}
int isEmpty()// checking is stack is empty
{
  return top == -1;
}
void push(char item) // Push function here, inserts value in stack and increments stack top by 1
{
  if (isFull())
    return;
  top++;
  stack[top] = item;
}
int pop()// Function to remove an item from stack.  It decreases top by 1
{
  if (isEmpty())
    return INT_MIN;
    return stack[top--];// decrements top and returns what has been popped

}
int peek()// Function to return the top from stack without removing it
{
  if (isEmpty())
    return INT_MIN;
    return stack[top];
}
int checkIfOperand(char ch) // A utility function to check if the given character is operand
{
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int precedence(char ch) // Fucntion to compare precedence
{
  switch (ch)
  {
    case '+':
    case '-':
      return 1;

    case '*':
    case '/':
      return 2;

    case '^':
      return 3;
  }
  return -1;
}
int getPostfix(char* expression) // The driver function for infix to postfix conversion
{
  int i, j;
  for (i = 0, j = -1; expression[i]; ++i)
  {
    if (checkIfOperand(expression[i])) // Here we are checking is the character we scanned is operand or not
      expression[++j] = expression[i]; // and this adding to output.
    else if (expression[i] == '(') // Here, if we scan character ‘(‘, we need push it to the stack.
      push(expression[i]);
    else if (expression[i] == ')') // Here, if we scan character is an ‘)’, we need to pop and print from the stack
    {
      while (!isEmpty(stack) && peek(stack) != '(')
      expression[++j] = pop(stack);
      if (!isEmpty(stack) && peek(stack) != '(')
        return -1; // invalid expression
      else
        pop(stack);
    }
    else // if an opertor
    {
      while (!isEmpty(stack) && precedence(expression[i]) <= precedence(peek(stack)))
      expression[++j] = pop(stack);
      push(expression[i]);
    }
  }
  while (!isEmpty(stack))
  expression[++j] = pop(stack); // adding all left elements from stack to exp
  expression[++j] = '\0';
}
void reverse(char *exp)
{
  int size = strlen(exp);
  int j = size, i=0;
  char temp[size];
  temp[j--]='\0';
  while(exp[i]!='\0')
  {
    temp[j] = exp[i];
    j--;
    i++;
  }
  strcpy(exp,temp);
}
void brackets(char* exp)
{
  int i = 0;
  while(exp[i]!='\0')
  {
    if(exp[i]=='(')
      exp[i]=')';
    else if(exp[i]==')')
      exp[i]='(';
      i++;
  }
}
void InfixtoPrefix(char *exp)
{
  int size = strlen(exp);
  reverse(exp); // reverse string
  brackets(exp); //change brackets
  getPostfix(exp); //get postfix
  reverse(exp); // reverse string again
}
int main()
{
  printf("The infix is: ");
  char expression[50];
  scanf("%s",expression);
  InfixtoPrefix(expression);
  printf("The prefix is: ");
  printf("%s\n",expression);
  return 0;
}
