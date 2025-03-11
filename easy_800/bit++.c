#include <stdio.h>


int main()
{
int n; 

scanf("%d", &n); 
int x = 0; 

for(int i =0; i < n; i++)
{
    char st[4]; // 'x' '+' '+'  '\0' ---->  '+' '+' 'x' '\0' 
    scanf("%s", st); // read the string inside st 
    if (st[1] == '+')
        x++;
    else 
        x--; 
     
}


printf("%d\n", x); 


}