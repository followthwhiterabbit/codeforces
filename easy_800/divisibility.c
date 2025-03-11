/* 
	Divisibility Problem 1328A --- Codeforces round 629 (Div 3)
	
	You are given two positive integers a and b, In one move you can increase a by 1(replace a with a + 1) Your task is to find
	the minimum number of moves you need to do in order to make a divisible by b. You have to make 0 moves if it's divisible. 




	input 
	5 ---> how many times we will make divisibility check 
	10 4 
	13 9 
	100 13
	123 456 
	92 46 
	
// this is very inefficient 
for(int i =0; i < 5; i++)
{
int a, b; 

std::cin >> a >> b; 
	
	while(a % b == 0)
	{
	

	a++; 
	}


}


int n; 
std::string result; 
std::cin >>n;


while(n--)
{
int a, b;
std::cin >> a >> b;

int moves = (b - (a % b)) % b; // minimum number of nodes let's say, 8 % 5 ---> (5 - (3)) % 3 = 2 moves we need 
result += std::to_string(moves) + "\n";


}

std::cout << result; 



 */ 

#include <iostream>
#include <string>

int main()
{

int n; 
std::string result; 
std::cin >>n;


while(n--)
{
int a, b;
std::cin >> a >> b;

int moves = (b - (a % b)) % b; // minimum number of nodes let's say, 8 % 5 ---> (5 - (3)) % 3 = 2 moves we need 
result += std::to_string(moves) + "\n";


}

std::cout << result; 











}






