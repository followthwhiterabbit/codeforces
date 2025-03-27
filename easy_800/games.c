/*

   1 2 3 

   1 - 2  2- 1 
   1 - 3  3 -1 
   2 - 3  3 -2 

   6 games played 

   input 
   3 --------> number of teams 
   1 2    -------> host uniform color, guest uniform color 
   2 4    
   3 4 
   output
   1

   input
   4
   100 42
   42 100
   5 42 
   100 5

//  the logic is like, we check the first index and count how many times it occcured in the following index 



output ---> print the number of games where the host team is going to play in the guest uniform 




for(int i = 0;  i < n; i++)
{
// here we take the values one after the other 
// we need to check if the value we got has appeared in one of the guest's uniform boolean array 
// that simple 
//
for(int j = 0; j < n; j++)
{
if(val[i][0] == val[j][1]) ----> o(n^2) 
cnt++;
}


}

*/ 


#include <stdio.h>

int main()
{
	int n; 
	int cnt = 0;
	scanf("%d", &n); 
	int arr[n][2];

	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);

	}

	// -------------------------------------------> O(N^2) SLOW -- make it faster 	
	for(int j = 0; j < n; j++)
	{

		for(int k = 0; k < n; k++)
		{
			if(arr[j][0] == arr[k][1])
				cnt++;

		}


	}


	printf("%d", cnt); 


}












