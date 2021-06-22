#include<iostream>

//using namespace std;

int main()

{

char data[100];
int i;
scanf("%c",&data);
for(i = 0; i < 100 ; i++)
{ 
	if(data[i]=='\0') 
			break;
	printf("%d\n", data[i]);
} 

return 0;

}
