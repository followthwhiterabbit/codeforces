/*
 
- first , we need to create an array of char elements occurrences 	
- then , we need to decrement this occurrences from the real array of the string 
- if it is zero, which means all substring characters are a part of this full string
- then we need to check all possibble substring and find the smallest number of characters 



*/

using namespace std;

#include <iostream>
#include <string>
#include <climits>

bool containsAllCharacters(string& s, string& p)
{
	int count[256] = {0};

	for(char &c : p)
	{
		count[c]++;
	}
	
	for(char &c : s)
	{
		count[c]--;
	}

	
	for(int i = 0; i < 256; i++)
	{
		if(count[i] > 0)
			return false;
	}

return true; 


}

// generate all substrings of the string 
string minWindow(string &s, string &p) // i take it by reference, because i don't want to copy the string 
{
	int m = s.length();
	int n = p.length(); 
	string smallestSubstring = "";
	
	int minlen = INT_MAX;

	for(int i = 0; i < m; i++) // i starts from 0, because we need to check all the substrings
	{
		for(int j = i; j <m; j++) // j starts from i,because we need to check substrings with all sizes 
		{
			string substr = s.substr(i, j -i + 1);  // substr takes two arguments, the first is the starting index, the second is the length of the substring,  +1 because we need to include the last character
		if(containsAllCharacters(substr, p))
		{
			int currlen = substr.length();	
			
			if(currlen  < minlen)
			{
				minlen = currlen;
				smallestSubstring = substr;
			}

		}

	}
}
return smallestSubstring;

}






int main() {

	string s = "timetopractice";
	string p = "toc";


	string result = minWindow(s, p);	

	if(!result.empty())
	{
		cout << result << endl;
	}else {
		cout << -1 << endl; 	
	}
	


}






