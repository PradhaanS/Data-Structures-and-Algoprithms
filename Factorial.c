#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("Enter the num\n");
	scanf("%d",&n); //to take input number
	f=fact(n);//factorial fuction call
	printf("Factorial %d",f);
}

int fact(int n)
{
	if(n==0) //factorial of 0 is 1
	{	
		return 1;
	}
	else if(n==1) //factorial of 1 is 1
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);//for n other than 0 and 1
	}
}
