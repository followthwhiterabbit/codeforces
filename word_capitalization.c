#include <stdio.h>
#include <ctype.h>




int main()
{

char arr[1000]; 

scanf("%s", arr); 


char* first = arr; 

*first = toupper(*first); 


printf("%s", arr); 




}
