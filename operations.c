#include "operations.h"
#include <stdio.h>
#include <stdlib.h>


int calculate(int argc, char *argv[]) {

    if (argc < 3) {
        printf("Error! Not enough arguments given!\n");
        return EXIT_FAILURE; // Alternativ: return 1 --> ist dasselbe wie EXIT_FAILURE
    }

    int a, b, c;
    char operator;

    if (sscanf(argv[1], "%d", &a) == 1 &&
        sscanf(argv[2], "%c", &operator) == 1 &&
        sscanf(argv[3], "%d", &b) == 1) {
        switch (operator) {
            case '+':
                c = a + b;
                break;

            case '-':
                c = a - b;
                break;

            case '*':
                c = a * b;
                break;

            case '/':
                if (b == 0) {
                    printf("Error! Division by zero is not possible!");
                    return EXIT_FAILURE;
                }
                c = a / b;
                break;

            case '%':
                if (b == 0) {
                    printf("Error! Division by zero is not possible!");
                    return EXIT_FAILURE;
                }
                c = a % b;
                break;

            default:
                printf("Error! Invalid operator '%c'!\n", operator);
                return EXIT_FAILURE;
        }

        printf("Result: %d\n", c);
        return EXIT_SUCCESS;
    }

    printf("Failed to parse arguments successfully!");
    return EXIT_FAILURE;
}