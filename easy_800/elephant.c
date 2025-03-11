#include <stdio.h>




int main(){


int e = 0, f; 

int div, rem; 

scanf("%d", &f); 


if(f > 0 && f <= 5)
	printf("%d", 1); 
else if(f > 5 & f <= 10)
{
	printf("%d", 2); 	
}
else if (f > 10 && f <= 15)
{
	printf("%d", 3); 	
	
}




while(f > 15)
{
	div = f / 5; 
	rem = f % 5; 

	if(f % 5 == 0)
		printf("%d", div);
	else 
		printf("%d", div + 1);


	break; 
	}



}
