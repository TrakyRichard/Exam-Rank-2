#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t k = 0;

    while (s[i])
    {
        while (reject[k])
        {
            if (reject[k] == s[i])
                return (i);
            k++;
        }
        k = 0;
        i++;
    }
    return (i);
}

/* int main(void)
{
    char    s[] = "ABCDEF4960910";
    char    reject[] = "013";
    size_t  own_func_ans = 0;
    size_t  lib_func_ans = 0;

    own_func_ans = ft_strcspn(s, reject);
    lib_func_ans = strcspn(s, reject);

    printf("The build in function return %zu\n and the other one i created returns %zu\n", lib_func_ans, own_func_ans);
} */