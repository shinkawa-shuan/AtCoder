#include <stdlib.h>

#include <cstdio>

int main() {
    int a, b, c;
    scanf(" %d %d", &a, &b);
    c = abs(a - b);
    if (c == 1) {
        printf("Yes\n");
    } else if (c == 9) {
        printf("Yes\n");
    }

    else {
        printf("No\n");
    }
}