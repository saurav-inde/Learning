#include <stdio.h>
#include <ctype.h>


/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{

char a = 45;

while (scanf("%c", &a))
{

printf("is %c a alphanumeric character : %d\n", a, isalnum(a));
printf("is %c a alphabet character : %d\n", a, isalpha(a));

printf("is %c a digit : %d\n", a, isdigit(a));

printf("is %c a lower case : %d\n", a, islower(a));

printf("is %c a alphanumeric character : %d\n", a, isprint(a));

printf("is %c a alphanumeric character : %d\n", a, ispunct(a));

printf("is %c a alphanumeric character : %d\n", a, isspace(a));

printf("is %c a alphanumeric character : %d\n", a, isupper(a));
}






return 0;
}

/*-----------------------------------------------------------------------------------------------------
--------------------------------subprogram section---------------------------------------------------*/