/*
	Coderbyte coding challenge: Simple Symbols

Using the C++ language, have the function SimpleSymbols(str) take the str
parameter being passed and determine if it is an acceptable sequence by either
returning the string true or false. The str parameter will be composed of + and
= symbols with several letters between them (ie. ++d+===+c++==a) and for the
string to be true each letter must be surrounded by a + symbol. So the string to
the left would be false. The string will not be empty and will have at least one
letter.

Sample test cases:

Input:  "+d+=3=+s+"
Output: "true"

Input:  "f++d+"
Output: "false"	


if first letter is a letter, return false

// find letter in string, check if it is surrounded by + symbols

// if it is not surrounded by + symbols, return false


 */


using namespace std;
#include <iostream>
#include <string>



string simpleSymbols(string str)
{
	if(isalpha(str[0]))
		return "false";
	
	for(int i = 0; i < str.size(); i++)
	{
		if(isalpha(str[i]))
			{
				if(str[i-1] != '+' || str[i+1] != '+')
					return "false";
			}

	}
	
	return "true";

}

int main(){

	cout << simpleSymbols("f++d+") << endl;
	cout << simpleSymbols("+d+=3=+s+") << endl;








}

