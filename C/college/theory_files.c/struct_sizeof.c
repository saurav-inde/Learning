#include <stdio.h>

int main()
{
    union student
    {
         int c;
        int d;
    };
    
union student a, b;
a.c = 12;
a.d = 42;

b.c = 45;

    //printf("%d%d",a.c, a.d);
    //printf("\n%d%d",b.c, b.d);
    int af =45;
    int* add = &af;
    printf("%p", &a.c );
     printf("\n%p", (void*)&a.d );
    return 0;
}