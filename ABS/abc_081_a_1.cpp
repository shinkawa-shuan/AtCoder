#include <cstdio>

int main() {
    char s[3];
    int count = 0, tmp = 0;
    scanf("%d", &tmp);
    if (tmp % 10 == 1) count++;
    if (tmp % 100 - (tmp % 10) == 10) count++;
    if (tmp - tmp % 100 == 100) count++;
    printf("%d", count);
}