#include <cstdio>

int main() {
    int n, x;
    int a[100];
    int b[100];
    scanf(" %d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf(" %d %d", &a[i], &b[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int c;
            c = a[i] + a[j];
        }
    }
}