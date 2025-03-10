#include <stdio.h>
#include <stdlib.h>




int main()
	{
	int m[5][5]; 
	int locx, locy; 

		for(int i = 0; i < 5; i++)
			for(int j = 0; j < 5; j++)
				scanf("%d", &m[i][j]); 

	
	
		for(int a = 4; a >=0; a--)
		{
			for(int b = 4; b >=0; b--)
				{
					if (m[a][b] == 1)
					{
						locx = a; 
						locy = b; 

					}
				}
		}


		printf("%d", abs(locx - 2) + abs(locy - 2)); 



	}

	
