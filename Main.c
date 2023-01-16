// A first program in c
#include <stdio.h>

//The mai function begans heere
int main(void) {
	int integer1, integer2; // This variables will hold the input entered by the user
	
	printf("Enter first integer\n"); //prompt
	scanf("%d", &integer1);// read an integer

	printf("Enter the second integer\n"); // Prompt for the second integer
	scanf("%d", &integer2);

	int sum = integer1 + integer2; // perform the  additional calculation
	int sub = integer1 - integer2; //perform substraction
    int division = integer1 / integer2; // perform the division calculation

	printf("The integers you provided are %d,%d\n", integer1,  integer2);
	printf("Sum is %d\n", sum);
	printf("Substraction is %d\n", sub);
	printf("Division is %d\n", division);







}
//end of the main function
// end of the intoduction part

//

