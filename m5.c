#include <stdio.h>

enum State {
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
};

enum State nextState(enum State state, int command, int stock) {

    if (stock == 0)
        return OUT_OF_STOCK;

    switch (state) {

        case IDLE:
            if (command == 1)
                return COIN_INSERTED;
            else
                return IDLE;

        case COIN_INSERTED:
            if (command == 2)
                return DISPENSE;
            else if (command == 3)
                return IDLE;
            else
                return COIN_INSERTED;

        case DISPENSE:
            return IDLE;

        case OUT_OF_STOCK:
            return OUT_OF_STOCK;
    }

    return IDLE;
}

void displayState(enum State s) {
    switch (s) {
        case IDLE:
            printf("IDLE\n");
            break;
        case COIN_INSERTED:
            printf("COIN_INSERTED\n");
            break;
        case DISPENSE:
            printf("DISPENSE\n");
            break;
        case OUT_OF_STOCK:
            printf("OUT_OF_STOCK\n");
            break;
    }
}

int main() {
    enum State state = IDLE;
    int command, stock;

    printf("Enter stock quantity: ");
    scanf("%d", &stock);

    if (stock < 0) {
        printf("Invalid stock");
        return 0;
    }

    while (1) {
        printf("\n1. Insert Coin\n");
        printf("2. Select Product\n");
        printf("3. Cancel\n");
        printf("4. Exit\n");

        printf("Enter command: ");
        scanf("%d", &command);

        if (command == 4)
            break;

        if (command < 1 || command > 4) {
            printf("Invalid command\n");
            continue;
        }

        enum State newState = nextState(state, command, stock);

        if (newState == DISPENSE) {
            printf("Product dispensed\n");
            stock--;
        }

        state = newState;

        printf("Current State: ");
        displayState(state);
    }

    return 0;
}