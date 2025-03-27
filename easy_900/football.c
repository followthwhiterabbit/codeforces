/* 
A. Football
time limit per test
2 seconds
memory limit per test
256 megabytes

Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.
Input

The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.
Output

Print "YES" if the situation is dangerous. Otherwise, print "NO". 
 */


#include <cstdio>
#include <climits>

int main()
{


char s[101]; 
int min_int = 0;
int count = 0; 
scanf("%s", s); 

char* p = s; 



while(*(p+1) != '\0')
{
	
	if(*(p+1) == *p)
	{
		count++; 
		
		if(count > min_int)
		{
			min_int = count; 
		}

	}
	else
	{
		count = 0; 
	}

p++;

}

if(min_int >= 6)
{
	printf("YES\n"); 
}
else
{
	printf("NO\n"); 



}

}
