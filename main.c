#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("**Welcome to my calculator**\n");
    printf("Please enter the number of the option you would like to do : \n1. Subtract\n2. Add\n3. Multiply\n4. Divide\n5. Exit\n");
    int choice;
    int x;
    int y;
    int z;

    scanf("%d", &choice);
    printf("Please type the first number you would like to operate on : ");
    scanf("%d", &x);
    printf("Please type the second number you would like to operate on : ");
    scanf("%d", &y);
    switch (choice) {
        case 1:
            z = x - y;

            break;
        case 2:
            z = x + y;

            break;
        case 3:
            z = x * y;

            break;
        case 4:
            z = x / y;

            break;
        case 5:

            exit(0);
    }
    printf("The answer is %d", z);
    return 0;
}