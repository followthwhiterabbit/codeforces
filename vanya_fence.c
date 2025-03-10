#include <stdio.h>

int main(){


int n, h; 
int width_count = 0; 

scanf("%d %d", &n, &h); 

int a[n]; 

for(int i = 0; i < n; i++)
{
	scanf("%d", &a[i]); 

}

for(int i = 0; i < n; i++)
{
	if(a[i] > h)
		width_count += 2; 	
	else 
		width_count++; 

}

printf("%d", width_count); 




}
