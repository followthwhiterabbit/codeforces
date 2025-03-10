#include <string>
#include <iostream>
#include <vector>


// we will have a function here that will take the number of elements and the vector and return string

std::string function_beautiful_array(int size, std::vector<int> &veca)
{
int even = 0; 
int odd = 0;


if(veca[0] % 2 == 0)
    even++;
else
    odd++;


for(int i = 0; i < size; i++)
{        
    for(int j = 0; j < i; j++)
    {
        
    if(veca[0] % 2 == 0)
    {
        if(veca[i] % 2 == 0)
        {
            even++;
            break;
        }


        if((veca[i] - veca[j]) % 2 == 0)
            {
                even++;
                break;
            }

    }

    if(veca[0] % 2 == 1)
    {
        if(veca[i] % 2 == 1)
        {
            odd++;
            break;
        }
    
       if((veca[i] - veca[j]) % 2 == 1)
            {
                odd++;
                break;
            }
    }     
             
    }
  
}

//std::cout << even << std::endl;
//std::cout << odd << std::endl; 

if(even == size || odd == size)
    return "YES";
else
    return "NO";




}

          
int main()
{
int num_of_tests, size, el;

std::cin >> num_of_tests;

for(int i = 0; i < num_of_tests; i++)
{

std::cin >> size;

std::vector<int> vec(size);

    for(int j = 0; j < size; j++)
    {
        std::cin >> vec[j];
  

    }

std::cout << function_beautiful_array(size, vec) << std::endl;
 
   
}




     



}

