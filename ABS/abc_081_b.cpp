#include <cstdio>

int main() {
    int n;
    int count = 0;
    int a[200];
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d", count);
            break;
        } else {
            a[i] = a[i] / 2;
        }
        if (i == n - 1) {
            count++;
            i = 0;
        }
    }
}