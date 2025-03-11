#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std; 


int main()
{

int num_of_elements; 
string value; 
int sum = 0; 

vector<string> elements;   

cin >> num_of_elements; 

for(int i = 0; i < num_of_elements; i++)
    {
        cin >> value; 
        elements.push_back(value); 


    }




std::map<std::string, int> str2int = {{"++X", 1 }, 
                                      {"X++" , 1},
                                      {"--X" , -1},
                                      {"X--", -1},
                                      {"++x", 1 }, 
                                      {"x++" , 1},
                                      {"--x" , -1},
                                      {"x--", -1}
                                      };











}


