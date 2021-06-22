#include <stdio.h>

void hanoi(int n,int from,int to,int temp);
int main()
{
	int n,from,to,temp;
	scanf("%d %d %d %d",&n,&from,&to,&temp);
	hanoi(n,from,to,temp);
	return 0;
}

void hanoi(int n,int from,int to,int temp)
{
	if (n==1)
	{
		printf("move from %d to %d \n",from,to);
		return;
	}
	hanoi(n-1,from,temp,to);
	hanoi(1,from,to,temp);
	hanoi(n-1,temp,to,from);
	return;
}
