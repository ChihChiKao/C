#include <stdio.h>
int main()
{//�®礭�B������B���᤭�B�R��13 ��>��>��>�� 4>3>2>1
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
			//�®�
			printf("%s%d ", "�®�", a[i] % 10);
		}
		else
		{

			if ((a[i] / 10) < 3 && (a[i] / 10) > 1)
			{  //��� 
				printf("%s%d ", "���", a[i] % 10);
			}
			else
			{
				if ((a[i] / 10) < 4 && (a[i] / 10) > 2)
				{
					//�R�� 
					printf("%s%d ", "�R��", a[i] % 10);
				}
				else
				{
					if ((a[i] / 10) < 2 && (a[i] / 10) > 0)
					{
						//����
						printf("%s%d ", "����", a[i] % 10);
					}
					else
					{
						if ((a[i] / 100) < 5 && (a[i] / 100) > 3)
						{
							printf("%s%d ", "�®�", a[i] % 100);
						}
						else
						{
							if ((a[i] / 100) < 4 && (a[i] / 100) > 2)
							{
								printf("%s%d ", "�R��", a[i] % 100);
							}
							else
							{
								if ((a[i] / 100) < 3 && (a[i] / 100) > 1)
								{
									printf("%s%d ", "���", a[i] % 10);
								}
								else
								{
									printf("%s%d ", "����", a[i] % 100);
								}
							}
						}
					}
				}
			}
		}
	}
}
