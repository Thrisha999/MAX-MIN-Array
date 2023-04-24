#include<stdio.h>
void main()
{
		int i,n,a[10],temp,j;
	printf("enter no. of elements to be inserted:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element",i);
		scanf("%d",&a[i]);
	}
	printf("the elements in an array:\n");
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element",i);
		printf("%d",a[i]);
	}
	printf("after sorting,the elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("%d\t",a[i]);
	}
	printf("minimum value in array=%d",a[0]);
	printf("maximum value in array=%d",a[n-1]);
}
