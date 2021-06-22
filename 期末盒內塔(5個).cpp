#include <stdio.h>
void hanoi5(int n,int from,int to,int temp,int temp2,int temp3);
int main()
{
	hanoi5(10,1,2,3,4,5);
	return 0;
}

void hanoi5(int n,int from,int to,int t1,int t2,int t3)
{
	if(n==1)
	{
		printf("move from %d to %d \n",from,to);
		return;
	}
	if(n==2)
	{
		printf("move from %d to %d \n",from,t1);
		printf("move from %d to %d \n",from,to);
		printf("move from %d to %d \n",t1,to);
		return;
	}
	if(n==3)
	{
		printf("move from %d to %d \n",from,t2);
		printf("move from %d to %d \n",from,t1);
		printf("move from %d to %d \n",from,to);
		printf("move from %d to %d \n",t1,to);
		printf("move from %d to %d \n",t2,to);
		return;
	}
	hanoi5(n-4,from,t3,to,t1,t2);
	hanoi5(1,from,t2,to,t1,t3);
	hanoi5(1,from,t1,to,t2,t3);
	hanoi5(1,from,to,t1,t2,t3);
	hanoi5(1,t1,to,from,t1,t3);
	hanoi5(1,t2,to,from,t2,t1);
	hanoi5(n-1,t3,to,from,t1,t3);
	return;
	//hanoi5(n-4,from,t3,to,t1,t2);
	//hanoi5(n-3,from,t3,to,t1,t2);
	//hanoi5(n-2,from,t3,to,t2,t1);
	//hanoi5(1,from,t2,to,t1,t3);
	//hanoi5(1,from,t2,t1,to,t3);
	//hanoi5(1,from,to,from,t2,t3);
	//hanoi5(1,t1,to,from,t2,t3);
	//hanoi5(1,t2,to,from,t1,t3);
	//hanoi5(n-1,t3,to,from,t1,t2);
} 
