#include <stdio.h>





int main()
{

int games; 
char ar[6];  // 1 to 100 000
char str[100000]; 
int anton = 0, danik = 0; 
scanf("%d", &games); 

scanf("%s", str); 

char* el = str; 


while(*el != '\0')
{
	if(*el == 'A')
		anton++;
	else if (*el == 'D')
		danik++; 

	el++; 
}


if(anton > danik)
	printf("Anton"); 
else if(danik > anton)
	printf("Danik");
else 
{	
	printf("Friendship");
}

	



	











}
