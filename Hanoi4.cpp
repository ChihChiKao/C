#include <stdio.h>

void hanoi(int n,int from,int to,int t1,int t2);
int main()
{
	int n,from,to,t1,t2;
	//scanf("%d %d %d %d",&n,&from,&to,&temp);
	hanoi(4,from,to,t1,t2);
	return 0;
}

void hanoi(int n,int from,int to,int t1,int t2)
{
	if ((n==1) or (n==2))
	{
		printf("move from %d to %d \n",from,to);
		return;
	}
	hanoi(n-2,1,4,3,2);
	hanoi(1,1,3,2,4);
	hanoi(1,1,2,3,4);
	hanoi(1,3,2,4,1);
	hanoi(n-2,4,2,3,1);
	return;
}
