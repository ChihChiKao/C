#include <stdio.h>
int count=1;
void Hanoi(int n,int from,int to,int temp)
{
	if(n==1)
		{
		printf("第%d次:move from %d to %d\n",count++,from,to);
		
		return;
		}
	else
		{
		Hanoi(n-1,from,temp,to);
		Hanoi(1,from,to,temp);
		Hanoi(n-1,temp,to,from);
		}
	
}

int main()
{
	int n,from,temp,to;
	printf("Hanoi tower:請輸入n個盤子,從第m軸移到j軸,總共z根\n");
	scanf("%d %d %d %d",&n,&from,&to,&temp);
	Hanoi(n, from, temp, to);
    printf("移動 %d 個盤子，總共需移動 %d 次\n", n, count-1);
	return 0;
}

