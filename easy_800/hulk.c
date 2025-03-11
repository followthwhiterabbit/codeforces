/*
Hulk 705A

Dr. Bruce Banner hates his enemies (like others don't). As we all know, he can barely talk when he turns into the incredible Hulk.
That's why he asked you to help him to express his feelings.

Hulk likes the Inception so much, and like that his feelings are complicated. 
They have n layers. The first layer is hate, second one is love, third one is hate and so on...

For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", and if n = 3 it's "I hate that I love that I hate it" and so on.

Please help Dr. Banner.
Input

The only line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of layers of love and hate.


input 
1
i hate it  

input
2
i hate that i love it  

input
3
i hate that i love that i hate it  

solution 
-----------
switch between hate and love


*/

#include <stdio.h>


void hulk(int a) // only a function that prints an output 
{
bool hate = true; 

	do
	{
	if(hate == true)
	{
		printf("I hate");
		a--; 
		
		if(a == 0)
			break;

		hate = false;

		printf(" that "); 
	}

	if(hate == false)
	{
		printf("I love");
		a--; 
		
		if(a == 0)
			break; 

		printf(" that "); 

		hate = true; 
	
	}
	 
	}while(a >= 1); 

	printf(" it"); 
}

int main() {

int n; 

scanf("%d", &n); 


hulk(n);





}
