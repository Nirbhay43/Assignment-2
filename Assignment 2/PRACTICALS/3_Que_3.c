// Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them.
// Display the results. 
 
#include<stdio.h>
main()
{
	int a, b;
	
	printf("\n\n\tEnter Two Integer:");
	scanf("%d %d",&a, &b);
	
	printf("\n\n\tArithmetic Operations:");
	printf("\n\n\t---------------------");
	
	printf("\n\n\t%d + %d = %d",a, b, a + b);
	printf("\n\n\t%d - %d = %d",a, b, a - b);	
	printf("\n\n\t%d * %d = %d",a, b, a * b);
	printf("\n\n\t%d / %d = %d",a, b, a / b);
	
	printf("\n\n\t---------------------");
	
	printf("\n\n\tRelational Operations:");
	printf("\n\n\t---------------------");
	
	printf("\n\n\t%d == %d = %d",a, b, a == b);
	printf("\n\n\t%d != %d = %d",a, b, a != b);
	printf("\n\n\t%d > %d = %d",a, b, a > b);
	printf("\n\n\t%d < %d = %d",a, b, a < b);
	printf("\n\n\t%d >= %d = %d",a, b, a >= b);
	printf("\n\n\t%d <= %d = %d",a, b, a <= b);
	
	printf("\n\n\t---------------------");
	
	printf("\n\n\tLogical operations:");
	printf("\n\n\t---------------------");
	
    printf("\n\n\t(%d > 0) && (%d > 0) : %d", a, b, (a > 0) && (b > 0));
    printf("\n\n\t(%d > 0) || (%d > 0) : %d", a, b, (a > 0) || (b > 0));
    printf("\n\n\t!(%d > %d) : %d", a, b, !(a > b));
    

    
	
}
