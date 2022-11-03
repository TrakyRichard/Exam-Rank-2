
#include <stdlib.h>
#include <stdio.h>

int isprime(int n)
{
    int i;
    
    i = 2;
    while (i < n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return  (1);
}

int fprime(int n)
{
    int factor = 2;
    int first = 1;
    
    if (n == 1)
        printf("1");
    while (factor <= n)
    {
        if (n % factor == 0 && isprime(factor))
        {
            if (first)
            {
                printf("%d", factor);
                first = 0;
            }
            else
                printf("*%d", factor);
            n = n / factor;
        }
        else
            factor++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        fprime(atoi(argv[1]));
    printf("\n");
    return (0);
}