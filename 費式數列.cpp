//1 1 2 3 5 8
#include <stdio.h>

int main()
{
int a ,b,n, i, c;
printf("�O���ƦC\n��Jn=");
scanf("%d", &n);
a = 1;
b = 1;
//if(n==1 or n==2)
if(n==1)
{
	printf("��Xf(n)=1");
	//printf("%d",a);
}
if(n==2)
{
	printf("��Xf(n)=1\n""��Xf(n)=1\n");
	//printf("%d/n",a);
}
//else 
{
printf("��Xf(n)=1\n");
printf("��Xf(n)=1\n");
for (i = 3; i <= n;i++)
	{
	c = b;
	b = a+b;
	a = c;
	printf("��Xf(n)=");
	printf("%d\n",b);
	}
	//printf("��Xf(n)=");
	//printf("%d",b);
}
return 0;
}

