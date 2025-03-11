#include <stdio.h>




int main()
{

int value, times; 


scanf("%d %d", &value, &times); 


while(times > 0)
{

if(value % 10 > 0 )
{
	value -= 1;
	times--; 

} 
else if (value % 10 == 0)
{
	value /= 10; 
	times --; 

}


}

printf("%d", value); 
		


}
