#include "../t08/mx_pow.c"
#include "../t10/mx_is_prime.c"

bool mx_is_mersenne(int n)
{
    unsigned long number = 0; 
    
    for (int power = 1; number < (unsigned long)n;power++)
    {
        if (mx_is_prime(power))
        {
            number = mx_pow(2, power);
        }
    }
    if (number - 1 == (unsigned long)n)
    {
        return true;
    }
    return false;
}

int main()
{
    printf("%d\n", mx_is_mersenne(2147483647));
    return 0;
}