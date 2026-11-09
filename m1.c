#include <stdio.h>

enum Day {
    MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY,
    FRIDAY, SATURDAY, SUNDAY
};

int main() {
    enum Day d;
    int n;

    printf("Enter day number (1-7): ");
    scanf("%d", &n);

    if (n >= 1 && n <= 7) {
        d = n;

        switch (d) {
            case MONDAY:
                printf("Monday");
                break;
            case TUESDAY:
                printf("Tuesday");
                break;
            case WEDNESDAY:
                printf("Wednesday");
                break;
            case THURSDAY:
                printf("Thursday");
                break;
            case FRIDAY:
                printf("Friday");
                break;
            case SATURDAY:
                printf("Saturday");
                break;
            case SUNDAY:
                printf("Sunday");
                break;
        }
    } else {
        printf("Invalid day number");
    }

    return 0;
}