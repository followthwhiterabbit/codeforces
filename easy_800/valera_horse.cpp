/*
 * --  codeforces 228A - 
 */ 

/*
Valera the Horse is going to the party with friends. He has been following the fashion trends for a while,
and he knows that it is very popular to wear all horseshoes of different color.
Valera has got four horseshoes left from the last year, but maybe some of them have the same color.
In this case he needs to go to the store and buy some few more horseshoes, not to lose face in front of his stylish comrades.

Fortunately, the store sells horseshoes of all colors under the sun and Valera has enough money to buy any four of them. However, in order to save the money, he would like to spend as little money as possible, so you need to help Valera and determine what is the minimum number of horseshoes he needs to buy to wear four horseshoes of different colors to a party.

Input

The first line contains four space-separated integers s1, s2, s3, s4 (1 ≤ s1, s2, s3, s4 ≤ 109) — the colors of horseshoes Valera has.

Consider all possible colors indexed with integers.

Output

Print a single integer — the minimum number of horseshoes Valera needs to buy.

*/



/*

Examples

Input

1 7 3 3 

Output

1

Input

7 7 7 7

Output
3

*/

#include <iostream>
#include <map>
#include <array>
/*
we need to map from numbers to their count	
1st example
-----------
	1 --> 1
	7 --> 1 
	3 --> 2  ---> we need one of this to another color, so we need to make 2 - 1 here

	std::array<int, 4> arr{1, 7, 3, 3};

2nd example
-----------
	7 --> 4  ---> we need to make this one so we need to make 4 - 1 , we need 3 of them 


3rd example
-----------
	1 1 2 2 let's say 

	element 1 ---> 2
	element 2 ---> 2 




for(auto &el : arr)
{
	arr[el]++; 	 --> not the index, array's elements' number will map to their occurrences 

}



C solution 
-----------

make a bool array -- 0 0 0 0 

if you see an array like 1 2 3 4 -- 1 1 1 1 
if you see an array like 7 7 7 7 -- 1 0 0 0 ---> count 0's 
if you see an array like 3 4 5 5 -- 1 1 1 0 									











*/


int vanya_horse(std::array<int, 4> &arr) // we don't need copying
{

	std::map<int, int> newmap; 


int needed_number =0; 

	for(auto &el : arr)
		newmap[el]++; 
	
	for(auto i : newmap)
	{
		if(i.second	> 1)
			needed_number+=(i.second - 1); 	

	}


return needed_number;

}




int main(){
/*	
	std::array<int, 4> arr{7, 7, 6, 6};
	std::map<int, int> newmap; 

	int needed_number =0; 

	for(auto &el : arr)
		newmap[el]++; 
	
	for(auto i : newmap)
	{
		if(i.second	> 1)
			needed_number+=(i.second - 1); 	

	}	
	
	std::cout << needed_number << std::endl; 
*/
	std::array<int, 4> horsearray; 

	for(int i = 0; i < 4; i++)
		std::cin >> horsearray[i]; 

	
	std::cout << vanya_horse(horsearray);



}







