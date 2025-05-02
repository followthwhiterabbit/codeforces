/*
SANTACLAUS 
DEDMOROZ 
SANTAMOROZDEDCLAUS


1 -- crate an array of 256 chars and increase the number of chars as we encounter it and refresh the array using the first two lines 
2 -- do it the same for the final string and check if they are equal 

 */
#include <stdio.h>
#include <stdbool.h>

int main(){

char names[256] = {false}; // initializes all of them with 0 
char cardboard[256] = {false}; // initializes all of them with 0 


char n1[100], n2[100], n3[100];

scanf("%s", n1);
scanf("%s", n2);
scanf("%s", n3);

char *p1 = n1; 
char *p2 = n2; 
char *p3 = n3; 

while(*p1 != '\0')
{
	names[*p1]++; 	
	
	p1++; 
}


while(*p2 != '\0')
{
	names[*p2]++;
	
	p2++; 
}

while(*p3  != '\0')
{
	cardboard[*p3]++;
	p3++;	

}

for(int i = 0; i < 256; i++)
	if(names[i] != cardboard[i])
{
		printf("NO");
		return 0;
}


printf("YES");


}
