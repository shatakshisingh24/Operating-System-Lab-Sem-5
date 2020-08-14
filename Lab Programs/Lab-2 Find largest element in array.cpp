//Find largest element is the array having atleast 5 elements
#include<stdio.h>
int main()
{
	int size,i,a[100],max;
	printf("Enter size of array:");
	scanf("%d", &size);
	
	printf("\nEnter %d elements:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d", &a[i]);
	}
	max=a[0];
	
	for(i=0;i<size;i++)
	{
	   if(a[i]>max)
	   {
	   	max=a[i];
	   }
	}
	printf("Largest element is: %d", max);
}

