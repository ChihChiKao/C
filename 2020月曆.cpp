#include <stdio.h>
void month_cal(int,int);

int main()
{
	int year;
	int month;
//	for(i=2;i<=26;i=i+4)
//	{
//		nine(i);
//		printf("\n\n");
//	}
//	printf("main=%d",i); 
//	return 0;
	int w,m;
	for(m=1;m<=12;m++)
	{
		printf("\n");
		printf("2020年%d月\n",m);
		printf("日 一 二 三 四 五 六");
		printf("\n");
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		
		//1三 2六 3日 4三 5五 6一 7三 8六  9二 10四 11日 12二 
		month_cal(m,31);
	}
	 else
	 {
	 	month_cal(m,30);
	 }
	}
	
	

	printf("\n");
	return 0;
}
void month_cal(int m,int a)
{	
	int d,count=0;
	if(m==1)
	{
		printf("         ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==4||count==11||count==18||count==25)
			{
				printf("\n");
			}			
		
		}
	}
	if(m==2)
	{
		printf("                  ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==1||count==8||count==15||count==22||count==29)
			{
				printf("\n");
			}			
		
		}
	} 
		if(m==3)
	{
		printf("");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==7||count==14||count==21||count==28)
			{
				printf("\n");
			}			
		
		}
	} 	if(m==4)
	{
		printf("         ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==4||count==11||count==18||count==25)
			{
				printf("\n");
			}			
		
		}
	} 	if(m==5)
	{
		printf("               ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==2||count==9||count==16||count==23||count==30)
			{
				printf("\n");
			}			
		
		}
	} 	if(m==6)
	{
		printf("   ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==6||count==13||count==20||count==27)
			{
				printf("\n");
			}			
		
		}
	} 	if(m==7)
	{
		printf("         ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==4||count==11||count==18||count==25)
			{
				printf("\n");
			}			
		
		}
	} 	if(m==8)
	{
		printf("                  ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==1||count==8||count==15||count==22||count==29)
			{
				printf("\n");
			}			
		
		}
	} 	if(m==9)
	{
		printf("      ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==5||count==12||count==19||count==26)
			{
				printf("\n");
			}			
		
		}
	} 	if(m==10)
	{
		printf("            ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==3||count==10||count==17||count==24||count==31)
			{
				printf("\n");
			}			
		
		}
	} 	if(m==11)
	{
		printf("");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==7||count==14||count==21||count==28)
			{
				printf("\n");
			}			
		
		}
	} 	if(m==12)
	{
		printf("      ");
		for(d=1;d<=a;d++)
		{

			printf("%2d ",d);
			count++;
			
			if(count==5||count==12||count==19||count==26)
			{
				printf("\n");
			}			
		
		}
	} 
	return ;
	

}
