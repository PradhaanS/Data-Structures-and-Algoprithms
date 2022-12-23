#include<stdio.h>
#include<ctype.h>
int stack[20];
int top=-1;
void push(int x)//fucntion to push elements
{
	stack[++top]=x;
}
int pop()//function to pop the elements
{
	return stack[top--];
}
int main()//main function
{
	char exp[20];
	char *e;
	int n1,n2,n3,num;
	printf("enter the expression:\n");
	scanf("%s",exp);//taking postfix expression from user
	e=exp;
	while(*e!='\0')//to check all values in postfix expression
	{
		if(isalnum(*e))
		{
			num=*e-48;//if it is number push into stack
			push(num);
		}
		else
		{
			n1=pop();
			n2=pop();//poping top two values when it ecounters operator
			switch(*e)//switch case
			{
				case'+':n3=n1+n2;
				break;
				case'-':n3=n2-n1;
				break;
				case'*':n3=n1*n2;
				break;
				case'/':n3=n2/n1;
				break;
				case'^':n3=n1^n2;
				break;
			}
			push(n3);//pushin result into top of stack
		}
		e++;
	}
	printf("\nThe result of the expression %s = %d\n\n",exp,pop());
	return 0;
}
