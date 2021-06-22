#include <stdio.h>
#include <math.h>

int main()
{
	int a[10]={12, 23, 34, 45, 56, 67, 78, 89, 90, 1},i,j,temp,n=10;
	float average,variance,sum,sd;
	//input
	//for (i=0;i<n;i++)
	//	scanf("%d",&(a[i]));
	
	//sort
for(j=0;j<n-1;j++)
	for(i=0;i<n-1;i++)
		if(a[i]<a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	
	//sum
	sum=0;
	for (i=0;i<(n/2);i++)
		sum+=a[i];
	
	
	//average
	average=sum/(n/2);
	
	//variance
	sum=0;
	for (i=0;i<(n/2);i++)
		sum+=(a[i]-average)*(a[i]-average);
	variance=sum/(n/2);
	
	//sd
	sd=pow(variance,0.5);
	
	//output
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("average=%f STANDARD DEVIATION=%f",average,sd);
	return 0;
	
	
}
