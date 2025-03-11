#include <stdio.h>



/*
 *   1987 - 2013 ---> after 1987 the only number with distinct digits is 2013  
 *   
 *
 */ 


int main(){

int  year; 
int a, b, c, d;

scanf("%d", &year);



do{
	year++;
	
	d = year % 10;  

	c = (year / 10) % 10; 

	b = (year / 100) % 10; 

	a = (year  / 1000); 

}while(a == b || a == c ||  a == d || b == c || b == d || c == d);


printf("%d",year);



} 

