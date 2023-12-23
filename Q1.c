#include<stdio.h>

void main()
{
	int i,n;
	
	printf("Enter the Size of an array:-");
	scanf("%d",&n);
	int arr[n];
	
	int *ptr,square;
	
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	ptr = &arr;
	printf("The square of each elements in a array are :- %d\n");
	
	for(i=0;i<n;i++)
	{
		printf("sqaure of each elements are = \n",(ptr+i)*(ptr+i));
	}
}
