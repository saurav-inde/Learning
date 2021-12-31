/*basic file copying program via getchar and
putchar functions one char at a time*/

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar())!= EOF) /*EOF is -1 here and can be also defined as symbolic */
    {
        putchar(c);
    }

    return 0;
}