#include <stdio.h>

void qsort(int *str,int from, int to);
void swap(int *str,int *a, int *b);
int split(int *str,int from,int to);

int main()
{
	int i;
	int str[10]={6,8,1,5,4,9,0,2,3,7};
	for(i=0;i<10;i++)
		printf("%d ",str[i]);
	qsort (str,0,9);
	printf("\n=======\n");
	for(i=0;i<10;i++)
		printf("%d ",str[i]);
	return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void qsort(int *str, int from, int to)
{
	if (from <= to) //return;
	{
    	int pivot = split(str,from,to);
        qsort(str,from, pivot - 1);
        qsort(str,pivot + 1, to);
        //return;
	}
}

int split(int *str,int from,int to)
{
	int pivot = str[to];
	int i = from -1;	
	for (int j = from; j < to; j++)
	{
		 if (str[j] < pivot)
		{
			i++;
            swap(&str[i], &str[j]);	
		} 
	}
	i++;
    swap(&str[i], &str[to]);
    return i;
} 

