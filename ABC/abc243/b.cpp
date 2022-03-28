#include <cstdio>

int main() {
    int n, t;
    int a[1000];
    int b[1000];
    int c1 = 0, c2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
        if (a[i] == b[i]) {
            c1++;
                }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                c2++;
            }
        }
    }
    printf("%d\n%d\n", c1, c2 - c1);
}