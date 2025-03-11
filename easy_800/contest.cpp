#include <iostream>
#include <vector>



int main()
{
int nop, kthplace, nofqualifiers = 0;
std::cin >> nop >> kthplace;
std::vector<int> vec(nop);

for(int i = 0; i < nop; i++)
{
    std::cin >> vec[i];

}


for(auto &el : vec)
{
    if(el >= vec[kthplace - 1] && el != 0)
        nofqualifiers++;

}

std::cout << nofqualifiers << std::endl; 


}