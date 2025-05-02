/*
Have the function LetterChanges(str) take the str parameter being passed and modify it using the following algorithm.


change every letter of the string to the one that follows it in the alphabet (ie. c becomes d, z becomes a).


input: "hello*3"
output: "Ifmmp*3"


input: "fun times!"
output: "gvO Ujnft!"

- replace every char with the next char in the alphabet for instance replace 

string s = "hello*3";

while(s[i] != '\0')
{
	if(s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] + 1; 
	}
	else if(s[i] >= 'A' && s[i] <= 'Z')
	{
		s[i] = s[i] + 1; 
	} i++; 
}
*/

using namespace std;

#include <string>
#include <iostream>
#include <array>

string capitalizevowel(string s)
{

	array<char, 5> vowels = {'a', 'e', 'i', 'o', 'u'};

	for(int i = 0; i < s.size(); i++)
	{
		for(int j = 0; j < vowels.size(); j++)
		{
			if(s[i] == vowels[j])
			{
				s[i] = s[i] -32;
			}

		}

	}
return s; 
}

string returnNewString(string s)
{
int i = 0;

while(s[i] != '\0')
{
	if(s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] + 1; 
	}
	else if(s[i] >= 'A' && s[i] <= 'Z')
	{
		s[i] = s[i] + 1; 
	}
	i++; 
}

s = capitalizevowel(s);

return s; 

}


int main(){

string s = "fun times!";

cout << returnNewString(s) << endl;


}
















