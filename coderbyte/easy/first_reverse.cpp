/*

coderbyte reverse : etybredoc
I Love Code reverse : edoC evoL I


 */ 



#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str)
{

	int length = str.length(); 

	for(int i = 0; i < length/2; i++)
	{
		char temp = str[i]; 
		str[i] = str[length - i - 1]; 
		str[length - i - 1] = temp;

	}

	return str;
}
