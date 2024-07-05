#include<stdio.h>
void towers(int,char,char,char);//function prototype
int main() //main function
{
	int num;
	printf("Enter the number of disks");//number of disks in the tower
	scanf("%d",&num);//to take input from user
	printf("The size of moves involved\n");//to display the moves the involved
	towers(num,'A','C','B');//function call 
	return 0;
}

void towers(int num,char frompeg,char topeg,char auxpeg)//function to move all the disks from A to C using auxilary B
{
	if(num==1)//in case one disk move it from frompeg to topeg
	{
		printf("\nmove disk 1 from peg %c to peg %c",frompeg,topeg);
		return;
	}
	towers(num-1,frompeg,auxpeg,topeg);//function call when num is not equal to 1
	printf("\nmove disk %d from peg %c to peg %c",num,frompeg,topeg);
	towers(num-1,auxpeg,topeg,frompeg);
}
