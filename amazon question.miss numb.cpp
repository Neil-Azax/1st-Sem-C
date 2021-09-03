#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,imp,sum=0,total,miss;
		int arr[n];
	
	printf("Enter the size of the Array : ");
	scanf("%d",&n);
	
	printf("Enter %d elements : ",n);
	for( i=0; i<n; i++)
		scanf("%d",&arr[i]);
	
	for( i=0;i<n;i++)
	{	if(arr[i]>n)
			imp=arr[i];
		}
	
	for( i=0; i<n; i++)
		sum = sum + arr[i];
	
	sum = sum - imp;
	
	total = n*(n+1)/2;
	
	miss = total - sum;
	
	printf("%d is missing in the place of %d",miss,imp);
	
	return 0;
}
