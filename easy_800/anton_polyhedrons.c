/*
we get the number of polyhedrons anton has 
tetrahedron ---> 4 
cube ---> 6 
octahedron ---> 8 
dodecahedron ---> 12
lcosahedron ---> 20



 */ 
#include <stdio.h>
#include <string.h>

int main()
{
char buffer[15];
int n,  sum = 0; 

char p1[12] = "Tetrahedron";
char p2[5] = "Cube";
char p3[11] = "Octahedron";
char p4[12] = "Icosahedron";
char p5[13] = "Dodecahedron";



scanf("%d", &n);

getchar(); 

while(n > 0)
{
	fgets(buffer, sizeof(buffer), stdin);
	
	buffer[strcspn(buffer, "\n")] = '\0';

	if(!strcmp(buffer, p1))
	{
		sum += 4;	
	}

	if(!strcmp(buffer, p2))
	{
		sum += 6;	
	}

	if(!strcmp(buffer, p3))
	{
		sum += 8;
	}


	if(!strcmp(buffer, p4))
	{
		sum += 20;
	}

	if(!strcmp(buffer, p5))
	{
		sum += 12;
	}

	n--; 
}


printf("%d", sum); 
}
