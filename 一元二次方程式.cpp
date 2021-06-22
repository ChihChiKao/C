# include <stdio.h>
# include <math.h>  
int main()
{
	float a,b,c,x1,x2,D ;
	//input
	scanf("%f %f %f",&a,&b,&c);
	D=pow(b,2)-(4*a*c);
	if(D<0)
	{
	
		printf("µL¸Ñ\n");
		goto aa;
	}
	else 
	{
	
		if(D==0)
		{
		
			x1=(-b)/2*a;
				printf("%f",x1);
				printf("­«®Ú\n");
	    }
		else
		{
			x1=(-b+pow(D,0.5))/(2*a);
			x2=(-b-pow(D,0.5))/(2*a);
				printf("%f %f",x1,x2);
      	}
	}
	//output

	aa:return 0;
}






