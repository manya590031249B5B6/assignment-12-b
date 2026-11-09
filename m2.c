#include <stdio.h>

enum Result {
    FAIL, PASS, DISTINCTION
};

enum Result getResult(float avg) {
    if (avg >= 75)
        return DISTINCTION;
    else if (avg >= 40)
        return PASS;
    else
        return FAIL;
}

int main() {
    float avg;
    enum Result r;

    printf("Enter average marks: ");
    scanf("%f", &avg);

    if (avg < 0 || avg > 100) {
        printf("Invalid marks");
        return 0;
    }

    r = getResult(avg);

    switch (r) {
        case FAIL:
            printf("Result: FAIL\nNumeric value: %d", r);
            break;

        case PASS:
            printf("Result: PASS\nNumeric value: %d", r);
            break;

        case DISTINCTION:
            printf("Result: DISTINCTION\nNumeric value: %d", r);
            break;
    }

    return 0;
}