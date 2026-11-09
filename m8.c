#include <stdio.h>

struct Permission {
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
    unsigned int admin : 1;
};

int main() {
    struct Permission p;

    unsigned int r,w,e,a;


    printf("Enter read (0 or 1): ");
    scanf("%u", &r);

    printf("Enter write (0 or 1): ");
    scanf("%u", &w);

    printf("Enter execute (0 or 1): ");
    scanf("%u", &e);

    printf("Enter admin (0 or 1): ");
    scanf("%u", &a);

    p.read=r;
    p.write=w;
    p.execute=e;
    p.admin=a;

    if (p.read > 1 || p.write > 1 ||
        p.execute > 1 || p.admin > 1) {
        printf("Invalid input");
        return 0;
    }

    printf("Permissions: ");

    printf("%c", p.read ? 'r' : '-');
    printf("%c", p.write ? 'w' : '-');
    printf("%c", p.execute ? 'x' : '-');
    printf("%c", p.admin ? 'A' : '-');

    return 0;
}