/*

   Petr wants to make a calendar for current month. For this purpose, he draws a table in which columns correspond to weeks(a week is seven 
   consequent days from Monday to Sunday), rows correspond to weekdays, and cells contain dates. For example, a calendar for January 2017 should look
   like on the picture

	2	9	16	23	30
	3	10	17	24	31
	4	11	18	25
	5	12	19	26
	6	13	20	27
	7	14	21	28
	8	15	22	29


petr wants to know how many columns his table should have given the month and weekday of the first date of that month ? Assume that the year is non-leap.

input :: one line contain two integers m and n (1 <= m <= 12, 1 <= d <= 7) - the number of month and the weekday of the first date of this month. 

input 
1 7 
6


1 1
5


january - 31
february - 28
march - 31
april - 30
may - 31
june - 30
july - 31
august - 31
september - 30
october - 31
november - 30
december - 31


max 6 columns -- every column has 7 days 

we take the month and the first weekday of that month 

- month and first weekday of that month 

std::array<int, 12> month{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


-- input: month - day 

int day_count = month[month]; 
int column = 1;
first column +(8 - day) 

day_count -= first column 

for(int i = 1; i <= 6; i++)
{
	while(day_count > 7)
	{
		day_count -= 7; 
		column++;
	}

}

std::cout << column + 1 << std::endl; 


 */ 

using namespace std; 
#include <iostream>
#include <array>


int main(){

std::array<int, 12> month{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int mon = 0, weekday = 0; 
int column = 1;

std::cin >> mon >> weekday; 

int day_count = month[mon-1];

day_count -= (8 - weekday); 

for(int i = 1; i <= 5; i++)
{
	while(day_count > 7)
	{
		day_count -= 7; 
		column++;
	}

}

std::cout << column + 1 << std::endl; 






}












