/*

Coderbyte coding challenge: Letter Capitalize

Using the C++ language, have the function LetterCapitalize(str) take the str
parameter being passed and capitalize the first letter of each word. Words will
be separated by only one space.

Sample test cases:

Input:  "hello world"
Output: "Hello World"

Input:  "i ran there"
Output: "I Ran There"


// capitalize first letter of each word
// -- first capitalize the first letter of the string 
// -- then capitalize every letter after the space 







 */ 



using namespace std;
#include <iostream>
#include <string>


string capitalize_string(string &str)
{

	char* p = &str[0];
	
	*p = *p - 32;

	while(*p != '\0')
	{
		if(*p == ' ')
		{
			p++;
			*p = *p - 32;
		}
		p++;
	}

return str; 

}

int main()
{
	
	string s = "hello world";
	cout << capitalize_string(s) << endl;

	string s1 = "i ran there";
	cout << capitalize_string(s1) << endl;






}




















