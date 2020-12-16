#include <stdio.h>

int main() {
	printf("**Welcome to my calculator**\n");
	printf("Please enter the number of the option you would like to do : \n1. Subtract\n2. Add\n3. Multiply\n4. Divide\n5. Exit\n");


	int Choice, x, y, z;
	scanf("%i", &Choice);
	fflush(stdin);
	scanf("%i", &Choice);
	scanf("%i %i", &x, &y);
	switch (Choice) {
	case '1':
		z = x - y;

		break;
	case '2':
		z = x + y;

		break;
	case '3':
		z = x * y;

		break;
	case '4':
		z = x / y;

		break;
	case '5':

		exit(0);
		break;
	}
	printf("The answer is %i", z);
	return 0;
}