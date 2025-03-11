/*
	Codeforces 469A -- I wanna be the Guy


	Input
	4 ---> the number of the levels of the game 
	3 1 2 3 ---> the first number 3 is the number of games Little X can pass and 1 2 3 are the numbers of the levels he can pass
	2 2 4 ----> the first number 3 is the number of games Little Y can pass and 2 4  are the numbers of the levels he can pass

	if they can pass all of the games print I become the guy else print Oh, my keyboard!


	-- get the number of levels  --> n  ---> 1 <= n <= 100 --constraints 
	
//  This approach not working 
	int n; 
	
	scanf("%d", &n);


	int nx, ny; 
	

scanf("%d", &nx);
int arr[nx]; 	
		
		for(int i = 0; i < nx; i++)
		{
			scanf("%d", &arr[i]);
				
		}

	
		int narr[ny];
		scanf("%d", &ny);

		for(int i = 0; i < ny; i++)
		{
			
			scanf("%d", &narr[i]);
		}


		if(arr[nx - 1] == nx && narr[ny -1] == n)
		{
			printf("I become the guy.");

		}
		else
		{

			printf("Oh, my keyboard!");
		}


// the best way to solve this problem is  by using bool array by nx and ny size, 
	
make just one bool array 

bool arr[the size of all levels];

iterate levels first player can pass
	update the array turn 0's 1s
iterate levels of the second player can pass
	update the array 


scanf("%d", &n);

int arrx[nx];
bool arr[n] = {false};

for(int i =0; i < nx; i++)
{
	if(!arr[arrx[i])
		arr[arrx[i]] = 1;
		
}

for(int i =0; i < ny; i++)
{
	if(!arr[arry[i])
		arr[arry[i]] = 1;
		
}


for(int i = 0; i < n; i++)
	printf("%d", arr[i]); 


		
*/

#include <stdio.h>

int main() 
{
int n; 
int nx, ny; 

scanf("%d", &n);

bool arr[n] = {false};

scanf("%d", &nx);

int arrx[nx];

for(int i = 0; i < nx; i++)
{
	scanf("%d", &arrx[i]);

}


scanf("%d", &ny);


int arry[ny];


for(int i = 0; i < ny; i++)
{
	scanf("%d", &arry[i]);

}



for(int i =0; i < nx; i++)
{
	if(!arr[arrx[i] - 1])
		arr[arrx[i] - 1] = true;	
}

for(int i =0; i < ny; i++)
{
	if(!arr[arry[i] - 1])
		arr[arry[i] -1] = true;
		
}

for(int i =0; i < n; i++)
{
	if(arr[i] == 0)
	{
	printf("Oh, my keyboard!"); 
	return 0;  
	}


}

printf("I become the guy."); 

}


