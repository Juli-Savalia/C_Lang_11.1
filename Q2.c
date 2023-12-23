#include<stdio.h>

void main()
{
	int x,y,z;
	int *ptr1,*ptr2;
	
	printf("Enter the value of x =");
	scanf("%d",&x);
	
	printf("Enter the value of y =");
	scanf("%d",&y);
	
	ptr1 = &x;
	ptr2 = &y;
	z = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = z;
	
	printf("value of x and y after swapping are = \n");
	printf("x = %d \n",*ptr1);
	printf("y = %d \n",*ptr2);
	
}
