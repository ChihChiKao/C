
#include <stdio.h>


int main()
{
	char s[20],s1[20];
	int i,j,k;
	//input
	scanf("%s",s);
	
	for(i=0;i<20;i++)
		if(s[i]=='\0') 
			break;
	s1[i]='\0';
	for(j=i-1;j>=0;j--)
		s1[j]=s[i-1-j];
	//s1[0]=s[1-1-0] 
	//s1[-1]=s[0-1+1] 
	//s1[-2]=s[]
	for(j=i-1;j>=0;j--)
		printf("%c",s[j]);
//¶r¶Í≈‹º∆¶r(AXCII)
//%c=¶r≤≈ %s=¶r¶Í %d=º∆¶r 
	for(k= 0; k < 20; k++)
{ 
	if(s1[k]=='\0') 
			break;
	printf("%d ", s1[k]);
} 
	
	//printf("==%s\n",s1);
	return 0;
	
	
	
}
