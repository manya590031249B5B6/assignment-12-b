#include <stdio.h>

struct Flags {
    unsigned int isOn : 1;
    unsigned int isReady : 1;
};

int main() {
    struct Flags f;
    unsigned int a, b;

    printf("Enter isOn (0 or 1): ");
    scanf("%u", &a);

    printf("Enter isReady (0 or 1): ");
    scanf("%u", &b);

    if (a > 1 || b > 1) {
        printf("Invalid input");
        return 0;
    }

    f.isOn=a;
    f.isReady=b;

    printf("isOn = %u\n", f.isOn);
    printf("isReady = %u\n", f.isReady);

    return 0;
}