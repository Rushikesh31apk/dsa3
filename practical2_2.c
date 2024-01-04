#include<stdio.h>
#include<time.h>
void accept(int a[],int n)
{
	printf("\n%d element genrate in array:\n",n);
	srand(time(0));
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%10;
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void insertion(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
void main()
{
	int a[20],n;
	printf("enter how many element you have store in array:\n");
	scanf("%d",&n);
	accept(a,n);
	printf("\nshow array before sorting:\n");
	display(a,n);
	printf("\nshow array after sorting:\n");
	insertion(a,n);
	display(a,n);
}
