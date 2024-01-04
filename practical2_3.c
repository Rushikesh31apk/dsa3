#include<stdio.h>
#include<time.h>
void accept(int a[],int n)
{
	printf("\n%d ele genrate fast:",n);
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
void selection(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
				a[min]=a[j];
			}
		}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;	
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
	selection(a,n);
	display(a,n);
}
