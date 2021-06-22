#include <stdio.h>
#include <math.h>
//頂標：該科成績位於第88百分位數之考生級分
//前標：該科成績位於第75百分位數之考生級分
//均標：該科成績位於第50百分位數之考生級分
//後標：該科成績位於第25百分位數之考生級分
//底標：該科成績位於第12百分位數之考生級分
int main()
{
	int a[10]={12, 23, 34, 45, 56, 67, 78, 89, 90, 1},i,j,temp,n=10;
	float average,variance,sum,sd;
	//input
	//for (i=0;i<n;i++)
	//	scanf("%d",&(a[i]));
	
	//sort
for(j=0;j<n-1;j++)
	for(i=9;i>0;i--)
		if(a[i-1]<a[i])
		{
			temp=a[i-1];
			a[i-1]=a[i];
			a[i]=temp;
		}
	
	//sum後標 
	sum=0;
	for (i=9;i>n-4;i--)
		sum+=a[i];
	//sum=sum+a[i]
	
	//average平均數 
	average=sum/((n-4)/2);
	
	//variance變異數 
	sum=0;
	for (i=9;i>n-4;i--)
		sum+=(a[i]-average)*(a[i]-average);
	variance=sum/((n-4)/2);
	
	//sd標準差 
	sd=pow(variance,0.5);
	
	//output
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("average=%f STANDARD DEVIATION=%f",average,sd);
	return 0;
	
	
}

