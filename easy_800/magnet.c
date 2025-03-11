/*
 *
 * magnet ---> 01 ---> plus -minus 
 * magnet ---> 10 ---> minus - plus 
 *
 *
 *
 *
 *
 */ 

#include <stdio.h>


int main()
{

	int number_of_magnets = 0; 
	int mag, new_mag, old_mag;
	int count = 1; 	
	scanf("%d", &number_of_magnets); 

	


		scanf("%d", &mag); 	
		
		old_mag = mag; 	

	for(int i = 1; i < number_of_magnets; i++)
	{
		scanf("%d", &mag); 	
		
		new_mag = mag; 
	
		if(new_mag != old_mag)
		{
			count++; 
			old_mag = new_mag; 

		}


		//  10
		//  10
		//  10 
		//  10  ---> one group 
		//
		//
		//  01 ---> second group 
		//  01
		//
		//  10 ----> third group 
		//
		//
		

	}

printf("%d", count); 


}
