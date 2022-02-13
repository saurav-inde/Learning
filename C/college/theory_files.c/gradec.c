#include <stdio.h>

/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{

    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);


    if (marks > 100 || marks < 0)
    {
        marks > 0 ? printf("Marks can,t exceed 100!") : printf("Marks can,t be less than 100!");
        return 0;
    }
    

     if (marks >= 95)
    {
        printf("Grade is A+ for %d", marks);
    }

    else if (marks >= 90)
    {
        printf("Grade is A for %d", marks);
    }

    else if (marks >= 85)
    {
        printf("Grade is B+ for %d", marks);
    }

    else if (marks >= 80)
    {
        printf("Grade is B for %d", marks);
    }

    else if (marks >= 70)
    {
        printf("Grade is C for %d", marks);
    }

    else if (marks >= 60)
    {
        printf("Grade is D for %d", marks);
    }

    
    else if (marks >= 50)
    {
        printf("Grade is E for %d", marks);
    }

    else
    {
        printf("Sorry person has failed in exam and grade is F!");
    }

    return 0;
}

/*-----------------------------------------------------------------------------------------------------
--------------------------------subprogram section---------------------------------------------------*/