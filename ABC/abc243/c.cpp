#include <cstdio>

int main() {
    int n, t;
    long int x[200000];
    long int y[200000];
    char s[200000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %ld %ld", &x[i], &y[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf(" %c", &s[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (y[i] == y[j]) {
                if (s[i] != s[j]) {
                    printf("Yes");
                    return 0;
                }
            }
        }
    }
    printf("No");
    return 0;
}