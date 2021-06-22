#include <stdio.h>
int main()
{//黑桃五、方塊五、梅花五、愛心13 桃>心>方>梅 4>3>2>1
	int a[4] = { 45,25,15,313 }, i, j, n = 4, temp;


	for (j = 0; j < n - 1; j++)
		for (i = 0; i < n - 1; i++)
			if (a[i] < a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
			
			
	for (i = 0; i < n; i++)
	{
		if ((a[i] / 10) < 5 && (a[i] / 10) > 3)
		{
			//黑桃
			printf("%s%d ", "黑桃", a[i] % 10);
		}
		else
		{

			if ((a[i] / 10) < 3 && (a[i] / 10) > 1)
			{  //方塊 
				printf("%s%d ", "方塊", a[i] % 10);
			}
			else
			{
				if ((a[i] / 10) < 4 && (a[i] / 10) > 2)
				{
					//愛心 
					printf("%s%d ", "愛心", a[i] % 10);
				}
				else
				{
					if ((a[i] / 10) < 2 && (a[i] / 10) > 0)
					{
						//梅花
						printf("%s%d ", "梅花", a[i] % 10);
					}
					else
					{
						if ((a[i] / 100) < 5 && (a[i] / 100) > 3)
						{
							printf("%s%d ", "黑桃", a[i] % 100);
						}
						else
						{
							if ((a[i] / 100) < 4 && (a[i] / 100) > 2)
							{
								printf("%s%d ", "愛心", a[i] % 100);
							}
							else
							{
								if ((a[i] / 100) < 3 && (a[i] / 100) > 1)
								{
									printf("%s%d ", "方塊", a[i] % 10);
								}
								else
								{
									printf("%s%d ", "梅花", a[i] % 100);
								}
							}
						}
					}
				}
			}
		}
	}
}
