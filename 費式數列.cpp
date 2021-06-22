//1 1 2 3 5 8
#include <stdio.h>

int main()
{
int a ,b,n, i, c;
printf("費式數列\n輸入n=");
scanf("%d", &n);
a = 1;
b = 1;
//if(n==1 or n==2)
if(n==1)
{
	printf("輸出f(n)=1");
	//printf("%d",a);
}
if(n==2)
{
	printf("輸出f(n)=1\n""輸出f(n)=1\n");
	//printf("%d/n",a);
}
//else 
{
printf("輸出f(n)=1\n");
printf("輸出f(n)=1\n");
for (i = 3; i <= n;i++)
	{
	c = b;
	b = a+b;
	a = c;
	printf("輸出f(n)=");
	printf("%d\n",b);
	}
	//printf("輸出f(n)=");
	//printf("%d",b);
}
return 0;
}

