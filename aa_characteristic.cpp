#include <iostream>
#include <vector>



int main()
{

int tn; 
std::cin >> tn; 

while(tn--)
{
    int size, k, x = -1;
    std::cin >> size >> k; 
    for(int i = 0; i <= size; i++)
    {
        if (i * (i - 1) / 2 + (size - i) * (size - i - 1) / 2 == k) {
                x = i;
            }

    }

if(x == -1)
    {
        std::cout << "NO\n";  
    }
    else
    {
        std::cout << "YES\n";
        for(int i = 0; i < size; i++)
        {
            if(i < x)
                std::cout << 1 << ' ';
            else
                std::cout << -1 << ' ';
        }

    std::cout << std::endl;

}

}


 


}

