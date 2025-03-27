/*

 Input: {"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"}
Output: 1,4,13


Input: {"1, 3, 9, 10, 17, 18", "1, 4, 9, 10"}
Output: 1,9,10 


// create an unordered set to the store the elements of the first array
//
// create a vector to store the common elements
//
// iterate through the second array and check if the element is in the set
//



*/

#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_set>

using namespace std;

string FindIntersection(string strArr[], int arrLength)
{
unordered_set<int> set;

vector<int> commonElements;

auto parseNumbers = [](const string &s) -> vector<int> { // capture s by reference for avoiding copying , return type is vector<int>

vector<int> numbers;
stringstream ss(s); 
string temp;
while(getline(ss, temp, ','))
{
	numbers.push_back(stoi(temp));  // convert string to int 
}
return numbers; 

}; 


vector<int> firstArray = parseNumbers(strArr[0]);
for( int num : firstArray)
{
	set.insert(num); 
}

vector<int> secondArray = parseNumbers(strArr[1]);
for(int num : secondArray)
{
	if(set.find(num) != set.end())
	{
		commonElements.push_back(num); 
	}
}

string result;

for(auto &el : commonElements)
{
	if(!result.empty())	
	{
		result += ","; 
	}
	result += to_string(el);
}




return result.empty() ? "[]" : result;  

}




int main() 
{

string strArr[] = {"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"};

cout << FindIntersection(strArr, 2) << endl;



}








