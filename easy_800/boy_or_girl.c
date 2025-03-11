#include <stdio.h>
#include <stdbool.h>



int main()
{

char uname[100]; 
int cnt = 0; 

scanf("%s", uname); 

bool seen[256] = {false}; 


char* current = uname; 



/*
 *   abcd
 */

while(*current != '\0')
{
	
	if(!seen[(unsigned char)*current]) {
		cnt++;
		seen[(unsigned char)*current] = true;
	
	}
	current++;

}

if(cnt % 2 == 0)
	printf("CHAT WITH HER!"); 
else
	printf("IGNORE HIM!"); 
	



}
