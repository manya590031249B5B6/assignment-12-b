#include <stdio.h>

enum Type {
    INT_VALUE, FLOAT_VALUE, CHAR_VALUE
};

struct Data {
    enum Type tag;

    union {
        int i;
        float f;
        char c;
    } value;
};

void printValue(struct Data d) {
    switch (d.tag) {
        case INT_VALUE:
            printf("Integer: %d", d.value.i);
            break;

        case FLOAT_VALUE:
            printf("Float: %.2f", d.value.f);
            break;

        case CHAR_VALUE:
            printf("Character: %c", d.value.c);
            break;
    }
}

int main() {
    struct Data d;
    int choice;

    printf("1. Integer\n2. Float\n3. Character\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            d.tag = INT_VALUE;
            printf("Enter integer: ");
            scanf("%d", &d.value.i);
            break;

        case 2:
            d.tag = FLOAT_VALUE;
            printf("Enter float: ");
            scanf("%f", &d.value.f);
            break;

        case 3:
            d.tag = CHAR_VALUE;
            printf("Enter character: ");
            scanf(" %c", &d.value.c);
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    printValue(d);

    return 0;
}