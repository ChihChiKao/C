#include <stdio.h>
#include <math.h>
//���СG�Ӭ즨�Z����88�ʤ���Ƥ��ҥͯŤ�
//�e�СG�Ӭ즨�Z����75�ʤ���Ƥ��ҥͯŤ�
//���СG�Ӭ즨�Z����50�ʤ���Ƥ��ҥͯŤ�
//��СG�Ӭ즨�Z����25�ʤ���Ƥ��ҥͯŤ�
//���СG�Ӭ즨�Z����12�ʤ���Ƥ��ҥͯŤ�
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
	
	//sum��� 
	sum=0;
	for (i=9;i>n-4;i--)
		sum+=a[i];
	//sum=sum+a[i]
	
	//average������ 
	average=sum/((n-4)/2);
	
	//variance�ܲ��� 
	sum=0;
	for (i=9;i>n-4;i--)
		sum+=(a[i]-average)*(a[i]-average);
	variance=sum/((n-4)/2);
	
	//sd�зǮt 
	sd=pow(variance,0.5);
	
	//output
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("average=%f STANDARD DEVIATION=%f",average,sd);
	return 0;
	
	
}

