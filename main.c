#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand((unsigned) time(NULL));
    int number = 1 + rand() % 100,
    inputNumber,
    attempts = 0;

    printf("Generating a number from 1 to 100...\n");
    do {
        printf("Enter with the %d attempt: ", ++attempts);
        scanf("%d", &inputNumber);

        if (inputNumber > number)
            printf("Enter a smaller number.\n");

        if (inputNumber < number)
            printf("Enter a bigger number.\n");

    } while(inputNumber != number);

    printf("Good, you got it!\n");
    printf("Attempts: %d\n", attempts);

    return 0;
}