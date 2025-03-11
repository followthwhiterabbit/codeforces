#include <iostream>
#include <vector>


int main()
{
int noq;
static int ret;
std::cin >> noq;

while(noq--)
{
std::vector<int> vec(3);


int cnt = 0; 
for(int i = 0; i < 3; i++)
{
    std::cin >> vec[i]; 

}

for(auto &el : vec)
{
    if(el > 0)
        cnt++;

}

if(cnt >= 2)
    ret++;



}

std::cout << ret << std::endl; 


}