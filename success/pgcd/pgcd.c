#include <stdio.h>
#include <stdlib.h>

long long ft_atoi(char *str)
{
    long long nbr;
    int sign;
    int i;

    nbr = 0;
    sign = 1;
    i = 0;
    if (str[i] == '-')
        return (-1);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + str[i] - '0';
        i++;
    }
    if (nbr > 2147483647)
        return (-1);
    return (nbr * sign);
}

int pgdc(int a, int b)
{
    int n;

    n = a;
    while (n > 0)
    {
        if (a % n == 0 && b % n == 0)
            return (n);
        n--;
    }
    return (n);
}

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int a = ft_atoi(argv[1]);
        int b = ft_atoi(argv[2]);
        if (b != -1 && b != -1)
        {
            printf("%d\n", pgdc(ft_atoi(argv[1]), ft_atoi(argv[2])));
            return (0);
        }
    }
    printf("\n");
    return (0);
}
