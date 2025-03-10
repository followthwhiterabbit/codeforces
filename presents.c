#include <stdio.h> /*
 *
 *   a[n] = 2 3 4 1  ---> 2 gave to 1, 3 gave to 2, 4 gave to 3 , 1 gave to 4 
 *					---> 2 --> 1 
 *						 3 --> 2 
 *						 4 --> 3 
 *						 1 --> 4 
 

						1 ---> 2 
						2 ---> 3 
						3 ---> 4 
						4 ---->1

						
4
2 3 4 1 

4 1 2 3 

 *
 *   
 *   for(int i = 0; i < n; i++)
 *		 scanf("%d", &a[i]); 
			

	for(int i = 0; i < n; i++)
	{
	 a[a[i] - 1] = i + 1; ---> this looks like it's working  

	}
 *
 *
 */ 



int main(){

	int n; 

	scanf("%d", &n); // the number of friends 
	
	int a[n], b[n]; 

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]); 

	 b[a[i] - 1] = i + 1; 
		
	}

	

	for(int i = 0; i < n; i++)
		printf("%d ", b[i]); 





}
