#include <cstdio>

int main() {
    int a[10];
    int tmp;
    for (int i = 0; i < 10; i++) {
        scanf(" %d", &a[i]);
    }
    tmp = a[0];
    for (int i = 0; i < 2; i++) {
        tmp = a[tmp];
    }
    printf("%d", tmp);
}