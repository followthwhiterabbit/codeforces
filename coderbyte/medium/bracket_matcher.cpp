/*
 *  return 1 if brackets match and 0 if they don't 
 *
 *
  */ 



#include <iostream>
#include <string>
using namespace std; 


int main()
{

// left bracket count = 0 
// right bracket count = 0

int left_bracket_count = 0;
int right_bracket_count = 0;


string s;
cin >> s;

for(int i = 0; i < s.length(); i++)
{
	if(s[i] == '(')
	{
		left_bracket_count++; 
	}
	else if(s[i] == ')')
	{
		right_bracket_count++; 
	}

}

if(left_bracket_count == right_bracket_count)
{
	cout << "1" << endl; 
}
else
{
	cout << "0" << endl; 

}

}
