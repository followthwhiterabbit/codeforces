/*

Pangram 520A -- Codeforces Round 295(Div 2)

A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once.
Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. 
Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs 
in the string in uppercase or lowercase.

Input

The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

The second line contains the string. The string consists only of uppercase and lowercase Latin letters.
Output

Output "YES", if the string is a pangram and "NO" otherwise.
Examples

Input

12
toosmallword

Output

NO

Input

35
TheQuickBrownFoxJumpsOverTheLazyDog

Output

YES


we need to create a map and count the number of map's elements.  ---> easy but, will be slow 
create a bool array, by the size of the elements, and check after switching them 1 if all of them ended up as 1. 

	// let's solve with map first 






c approach
------------

we need to create a boolean array of 26 characters since it's latin

/// ---> THE EASIEST SOLUTION 

bool seen[26] == {false};
int count = 0; 

for(char el : mystr) {
	el = std::tolower(el); 
	if(!seen[el - 'a']) {
		seen[el - 'a'] = true; 
		count++;
	}

}

if (count == 26)
	printf("YES");
else
	printf("NO");
	






*/

#include <map>
#include <iostream>
#include <cctype>


int main()
{
	std::map<char, int> mapchar; 
	std::string mystr;
	int n; 

	std::cin >> n; 
	std::cin >> mystr; 	

		
	for(char &el : mystr)
	{
		if(el >= 'A' && el <= 'Z')
			el = std::tolower(el);

	mapchar[el]++;
		
	}
	
	

	if(mapchar.size() == 26)
		std::cout << "YES"; 
	else
	{
		std::cout << "NO";
	}





}















