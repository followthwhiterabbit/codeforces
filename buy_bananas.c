#include <stdio.h>
#include <stdlib.h>






int main(){

	int k, n, w; 

	scanf("%d %d %d", &k, &n, &w); 

	int price_for_b = 0; 	
	int borrow = 0; 

	for(int i = 1; i <= w; i++)
		price_for_b +=  k*i; 

	

	if(n > price_for_b)
		printf("%d", 0); 
	else 
	{
	
	borrow = price_for_b - n;
	printf("%d", borrow); 

	}



}
