#include "operations.h"
#include <stdio.h>
#include <stdlib.h>


int calculate(int argc, char *argv[]) {

    if (argc < 4) {
        printf("Error! Not enough arguments given!\n");
        return EXIT_FAILURE; // Alternativ: return 1 --> ist dasselbe wie EXIT_FAILURE
    }

    float a = atof(argv[1]);
    char operator = *(argv[2]); // -> Pointer, später dazu mehr ;)
    float b = atof(argv[3]);
    float result;


    switch (operator) {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            if (b == 0) {
                printf("Error! Division by zero is not possible!\n");
                return EXIT_FAILURE;
            }
            result = a / b;
            break;

        default:
            printf("Error! Invalid operator '%c'!\n", operator);
            return EXIT_FAILURE;
    }

    printf("Result: %.2f\n", result);

    return EXIT_SUCCESS;
}