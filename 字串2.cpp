
#include <stdio.h>


int main()
{
	char s[20],s1[20];
	int i,j;
	//input
	scanf("%s",s);
	
	for(i=0;i<20;i++)
		if(s[i]=='\0') 
			break;
	s1[i]='\0';
	for(j=i-1;j>=0;j--)
		s1[j]=s[i-1-j];
			
	
	//for(j=i-1;j>=0;j--)
		//printf("%c",s[j]);
		
	
	
	printf("==%s\n",s1);
	return 0;
	
	
	
}
