#include <stdio.h>
#include "/Users/jde-la-m/j08/ex00/ft_split_whitespaces.c"

int    main(void)
{
    char *str;
    char **res;
    str = "   test1 test1 test3   t e s t 4  ";
    res = ft_split_whitespaces(str);
    while(*res)
    {
        printf("%s\n", *res);
        res++;
    }
    return (0);
}