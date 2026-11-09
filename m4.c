#include <stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};

int main() {
    enum MenuChoice choice;
    float a, b;

    while (1) {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n");
        printf("4. Divide\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", (int *)&choice);

        if (choice == EXIT) {
            printf("Calculator exited");
            break;
        }

        if (choice < ADD || choice > DIVIDE) {
            printf("Invalid choice\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
            case ADD:
                printf("Result = %.2f\n", a + b);
                break;

            case SUBTRACT:
                printf("Result = %.2f\n", a - b);
                break;

            case MULTIPLY:
                printf("Result = %.2f\n", a * b);
                break;

            case DIVIDE:
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero not allowed\n");
                break;
        }
    }

    return 0;
}