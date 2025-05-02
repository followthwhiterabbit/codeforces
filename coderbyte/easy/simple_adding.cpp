/*

Coderbyte coding challenge: Simple Adding

Using the C++ language, have the function SimpleAdding(num) add up all the
numbers from 1 to num. For example: if the input is 4 then your program should
return 10 because 1 + 2 + 3 + 4 = 10. For the test cases, the parameter num will
be any number from 1 to 1000.

Sample test cases:

Input:  12
Output: 78

Input:  140
Output: 9870



 */ 
using namespace std; 
#include <iostream>
#include <gtest/gtest.h>


int simpleAdding(int num)
{
	int sum = 0; 

	for(int i = 1; i <= num; i++)
		sum += i; 

	return sum; 

}

int main()
{

	std::cout << simpleAdding(140) << std::endl;

}


