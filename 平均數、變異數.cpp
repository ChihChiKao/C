#include <stdio.h> 

int main()
{
int i,a[20],x,x2;	
int sum,sum2;
sum=0;
sum2=0;
printf("請輸入20位學生成績\n輸入n=");
for(i=0;i<20;i++)
	{
	scanf("%d",&(a[i]));
	sum=sum+a[i];
	}
x=sum/20;
for(i=0;i<20;i++)
	{
	sum2=sum2+(a[i]-x)*(a[i]-x);
	}
x2=sum2/20;
printf("平均為=%d\n" "變異數=%d\n",x,x2);
return 0;
}

