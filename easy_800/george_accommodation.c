#include <stdio.h>






int main()
{
	int r;
	int count = 0; 
	scanf("%d", &r); 

	int ri[r], ci[r]; 

	for(int i = 0; i < r; i++)
	{
		scanf("%d %d", &ri[i], &ci[i]); 

		if(ci[i] - ri[i] >= 2)
			count++; 
	
	}
	
	printf("%d", count); 


	












}
