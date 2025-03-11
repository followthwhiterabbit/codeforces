#include <stdio.h>



int main(){



    long long n;
    scanf("%lld", &n);
    
    // Direct formula for computation
    long long sum = (n % 2 == 0) ? (n / 2) : -(n + 1) / 2;

    printf("%lld\n", sum);
    return 0;
}
