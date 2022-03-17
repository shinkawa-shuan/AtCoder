#include <cstdio>

int main() {
    int v, a, b, c;
    scanf("%d %d %d %d", &v, &a, &b, &c);
    while (1) {
        v -= a;
        if (v < 0) {
            printf("F");
            break;
        }
        v -= b;
        if (v < 0) {
            printf("M");
            break;
        }
        v -= c;
        if (v < 0) {
            printf("T");
            break;
        }
    }
}
