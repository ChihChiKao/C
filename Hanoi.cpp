#include <stdio.h>
int count=1;
void Hanoi(int n,int from,int to,int temp)
{
	if(n==1)
		{
		printf("��%d��:move from %d to %d\n",count++,from,to);
		
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
	printf("Hanoi tower:�п�Jn�ӽL�l,�q��m�b����j�b,�`�@z��\n");
	scanf("%d %d %d %d",&n,&from,&to,&temp);
	Hanoi(n, from, temp, to);
    printf("���� %d �ӽL�l�A�`�@�ݲ��� %d ��\n", n, count-1);
	return 0;
}

