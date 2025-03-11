/*
 *
xor and triangle 

please determine if there exists a positive integer y that satisfies the following conditions. 

- y strictly less than x

- there exists a non-degenerate triangle* with side lengths x, y, x bitwise operator y. 


- additionally, if there exists such y, output any. 

∗
A triangle with side lengths a, b, c is non-degenerate when a+b>c, a+c>b, b+c>a.

// check this later


 */
#include <stdio.h>

int return_y(int x)
{
int highest_power_of_2 = 1;

    while (highest_power_of_2 * 2 <= x) {
        highest_power_of_2 *= 2;
    }

    int y = highest_power_of_2 - 1;
    int a = x, b = y, c = x ^ y;

    if (a + b > c && a + c > b && b + c > a) {
        return y;  
    }

    y = highest_power_of_2;
    c = x ^ y;

    if (a + b > c && a + c > b && b + c > a) {
        return y;  
    }

    return -1;  


}

int main()
{

	int n; 
	int x;
	scanf("%d", &n); 
	int res[n]; 

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		res[i] = return_y(x);		

	}

	for(int i = 0; i < n; i++)
		printf("%d\n", res[i]);

}











