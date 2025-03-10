#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
 *
 *
 * HoUse --> count 
 * 
 *
 * -- count the numbers 
 *		- 
 *
 *
 */




int main()
{
	
char s[100]; // we take this string 
int up =0, low = 0;
scanf("%s", s); 


char* el = s; 


while(*el != '\0')
{
	if(isupper(*el))
		up++;
	else 
		low++; 

el++; 
}

if(low >= up)
{
	for(int i = 0; i < strlen(s); i++)
		s[i] = tolower(s[i]); 
}
else
{
	for(int i = 0; i < strlen(s); i++)
		s[i] = toupper(s[i]); 

}
	
printf("%s", s); 





}
