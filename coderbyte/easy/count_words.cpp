using namespace std; 
#include <iostream>
#include <string>
#include <sstream>
#include <map>
/*
int countWords(string str)
{

stringstream ss(str); 


string word; 

int count = 0; // counting words 

// how this counts words ? 
// it counts words by counting spaces between words
//
// for example:
// "I Love Code" has 2 spaces between words
// so it has 3 words
//
// ok but how it understands spaces between words ?
//
//

while(ss >> word)
	count++; 

return count;


}

*/

/*
void printFrequency(string st)
{

	std::map<string, int> freqword;

stringstream ss(st);

string word; 

while(ss >> word)
	freqword[word]++; 

for(auto m : freqword)
	cout << m.first << " " << m.second << endl; 

}

*/ 

// convert integer to string 

string intToString(int num)
{

	stringstream nvim;
	
	nvim << num;
		

	string x; 

	nvim >> x; 
	
	return x+"4";	
}


int main()
{
//string s = "nvim  Nvim emacs Emacs doom Doom";
//printFrequency(s);

	std::cout << intToString(123) << std::endl; 


}
