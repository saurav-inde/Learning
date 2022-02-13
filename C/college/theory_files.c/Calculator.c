#include <stdio.h>
#define MINUS -
#define PLUS +
#define MULTIPLY *
#define DIVIDE /

/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{

float a, b;
char c ;
#define CHARACTER (c)
printf("Enter numbers a and b and operator: ");

scanf("%f %f %c",&a, &b, &c);

if (c == '+')
{
    printf("%.3f %c %.3f = %.3f" ,a, c, b, a PLUS b);
}
else if (c == '-')
{
    printf("%.3f %c %.3f = %.3f" ,a, c, b, a MINUS b);
}

else if (c == '*'){
    printf("%.3f %c %.3f = %.3f" ,a, c, b, a MULTIPLY b);
}

else{
    printf("%.3f %c %.3f = %.3f" ,a, c, b, a DIVIDE b);
}

return 0;
}

/*-----------------------------------------------------------------------------------------------------
--------------------------------subprogram section---------------------------------------------------*/