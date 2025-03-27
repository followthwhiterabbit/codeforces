/*

bool a[1000]; // creating a space for 1000 distinct characters at max which is impossible considering ascii to be 1 byte 256 possibility to have 


bool ch[256] = {false};


a --> hex 61 
z ---> hex 7A

first one is at index 1 ---> 
second one is 3 more at index 4 ---> 
third one is 3 more at index 7. 


0 1 2 3 4 5 6 7
  f     s     t 

char* ch = &buffer; ---> ch points to an element of char type 

ch++; ---> move one step first 

while(*ch != '\0' || *ch != '}') // while inserted stream of characters is not termination character, check for 1 4 7 11 14 elements 
{
	if(*ch >= 97 || *ch <= 122)
		{
			ch[*ch] = 1;	
		}
	
	ch+=3;
}

int cnt = 0; 

for(int i = 0; i < 256; i++)
{
	if(ch[i] == 1)
		cnt++;
}



 */

#include <stdio.h>
#include <stdbool.h>


int main()
{

char arr[1000]; 
bool visited[256] = {false};

fgets(arr, sizeof(arr), stdin);


char* ptr = arr;

ptr++; 

while(*ptr != '\0' && *ptr != '}') // while inserted stream of characters is not termination character, check for 1 4 7 11 14 elements 
{
	if(*ptr >= 'a' || *ptr <= 'z')
		{
			visited[*ptr] = 1;	
		}
	
	ptr+=3;
}

int cnt = 0; 

for(int i = 0; i < 256; i++)
{
	if(visited[i] == 1)
		cnt++;
}

printf("%d", cnt);


}











