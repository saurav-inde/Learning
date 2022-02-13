#include<stdio.h>

int main(void){
int a, b ;
printf("Enter values of a and b ");
scanf("%d%d", &a, &b);


printf("\nBITWISE AND OF %d and %d: %d ",a,b,   a & b);  //BITWISE AND give decimal of and of binary of both
printf("\nBITWISE OR of %d and %d: %d ", a,b,   a | b);  //BITWISE OR give decimal of or of binary of both
printf("\nBITWISE COMPLEMENT of %d: %d ",a, ~a);

printf("\nafter right shift(works cyclic) of %d: %d ",a, a>>2); //add n zeros in front and remove last two bits
printf("\nafter right shift(works cyclic) of %d: %d ",a, a<<3);

//in left shift  by say 2 add 2 zeros to lsb 


int e, f = 5, d; //declaring three varaibled and assigning 5 to the variable f


// ternary operator syntax     extression ? <code> : <code>
int ans = 6 > 5 ? 54 : 94 ;
return 0;
}
