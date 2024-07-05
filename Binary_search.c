#include<stdio.h>
int binarysearch(int arr[],int x,int low,int high)//fucntion definition
{
	if(high>=low)//high should be greater than low
	{
		int mid=low+(high-low)/2; //mid=(low+high)/2
		if(arr[mid]==x)
			return mid;//element if found at mid
		else if(arr[mid]>x)//if element is less than mid value
			return binarysearch(arr,x,low,mid-1);// seacrh element from low to mid-1
		else 
			return binarysearch(arr,x,mid+1,high);//search element from mid+1 to high
	}
	return -1;
}

int main(void)//main function

{
	int x;
	int arr[]={1,2,3,4,5,6,7,8,9,10};//initializing array in sorted manner
	int n=sizeof(arr)/sizeof(arr[0]);//n=last index of the array
	printf("enter a number between 1-10\n");
	scanf("%d",&x);
	int result=binarysearch(arr,x,0,n-1);//low=0 high=n-1
	if(result==-1)
		printf("Element not found");
	else
		printf("Element is found at index %d\n",result);
}
