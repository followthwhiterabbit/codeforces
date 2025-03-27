/*

   // we have 4 points and we need to check if a square can be drawen. 
  

	(-l, 0)
	(r, 0)
	(0, u)
	(0, d)

we read by l, r, d, u 


*/
#include <stdio.h>


bool can_square_be_driven(int l, int r, int d, int u)
{

 // the slope of them clockwise should be 1, -1, 1, -1
	if( (u / l == 1 && u % l == 0) && (u / r == 1 && u % r == 0) && (d / r == 1 && d % r == 0) && (l / d == 1 && l % d == 0))		
		return true;
	else 
		return false;

}


int main()
{

	int n, l, r, d, u;
	bool res[n];

	scanf("%d", &n); 


	for(int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &l, &r, &d, &u);	
		res[i] = can_square_be_driven(l, r, d, u);
		

	}

for(int i = 0; i < n; i++)
{
	if(res[i] == 1)
		printf("yes\n");
	else
		printf("no\n");

}



}

