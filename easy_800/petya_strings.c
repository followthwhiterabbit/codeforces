#include <stdio.h>
#include <strings.h>



int main(){
	
	char str1[100];
	char str2[100];

	scanf("%s", str1); 
	scanf("%s", str2); 

	
	int res =  strcasecmp(str1, str2); 

	if(res < 0)
		printf("%d",  -1); 
	else if (res > 0)
		printf("%d", 1); 
	else 
		printf("%d", 0); 











}
