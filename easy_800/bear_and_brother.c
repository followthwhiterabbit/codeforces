#include <stdio.h>






int main()
{
	
	int a, b;
	int year = 0; 

	scanf("%d %d", &a, &b); 


	while(a <= b){
	
		a = 3 * a;
		b = 2 * b; 
		year++; 
		if (a > b)
			break; 
		


	}


	printf("%d", year);








}
