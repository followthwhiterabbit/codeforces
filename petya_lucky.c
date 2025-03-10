#include <stdio.h>






int main()
{

int num_of_lucky_digits = 0; 


char s[20]; 


scanf("%s", s); 

char* el = s;


while(*el != '\0')
{
	if(*el == '4' || *el == '7')
		num_of_lucky_digits++; 
	
	el++; 
	
}

if(num_of_lucky_digits == 4  || num_of_lucky_digits == 7)
	printf("YES");
else 
	printf("NO"); 

	










}
