

/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>



int main()
{
	int i,x,j,n=1000,temp;
	
	int a[1000];
	FILE * pFile;
	pFile = fopen ("myfile.txt" , "r");
	if (pFile == NULL) return 0;
	srand(time(NULL));
	for(i=0;i<1000;i++)
	{
		fscanf(pFile,"%d",&a[i]);
		//printf("%d-->%d\n",i,a[i]);
	}
//sort
for(j=0;j<n-1;j++)
	for(i=999;i>0;i--)
		if(a[i-1]<a[i])
		{
			temp=a[i-1];
			a[i-1]=a[i];
			a[i]=temp;
		}
	
//前標
//sum
	int  average,sum;
	sum=0;
	for (i=0;i<=500;i++)
	{
		//printf("%d-->%d\n",i,a[i]);
		sum=a[i]+sum;
	}
		//printf("sum=%d",sum);
	
	
	
//average
	average=sum/(n/2); 
//output
	//for(i=0;i<1000;i++)
	printf("前標=%d\n",average);
return 0;
}
