#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

//"3+2+1" --> "1+2+3" 

// we need to sort the values and then print them putting '+' in between 





int main(){

char str [100]; // the longest string can be 100 characters long 

//scanf("%[^\n]s", str); // reading the string here , reads every character in the string until a newline character is included 
				 

//printf("%s", str); 

scanf("%100s", str); 

// we need to put these string numbers into an array 

/*
 * for instance for 3 numbers such as 1+2+3 --> 3 - 1 + symbol 
 * for instance for 4 numbers , 1+1+2+3 ---> 4 - 1 symbol 
 * for instance for 5 numbers , 1+2+3+1+2 ---> there are 5 - 1 symbols 
 */  


char* el = str;
int count_1 = 0, count_2 = 0, count_3 = 0, num; 
int general_count = 0; 
while(*el != '\0')
{
	//printf("%c", *el); 
	
	num = *el - '0';
	
	if(num == 1)
		count_1++; 
	else if(num == 2)
		count_2++;
	else if(num == 3)
	{
		count_3++; 
	}


	el+=2; 


}

general_count = count_1 + count_2 + count_3; 

for(int i = 0; i < count_1; i++)
	{
	if(count_1 == 1 && (count_2 == 0 && count_3 == 0))
	{
		printf("%d", 1);
		break;
	}
	else
	{
		if(general_count == 1)
		{
			printf("%d", 1);
			break;
		}
		else
		{
		printf("%d+", 1);
		general_count--; 
		}




	}

	}


for(int i = 0; i < count_2; i++)
{
	if(count_2 == 1 && (count_1 == 0 && count_3 == 0))
	{
		printf("%d", 2);
		break;
	}
	else
	{
			if(general_count == 1)
		{
			printf("%d", 2);
			break;
		}
		else
		{
		printf("%d+", 2);
		general_count--; 
		}


	}

}

for(int i = 0; i < count_3; i++)
{
	if(count_3 == 1 && (count_2 == 0 && count_1 == 0))
	{
		printf("%d", 3);
		break;
	}
	else
	{ 
		if(general_count == 1)
		{
			printf("%d", 3);
			break;
		}
		else{
		printf("%d+", 3);
		general_count--; 
		}

	}

}




}
