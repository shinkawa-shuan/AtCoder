#include <cstdio>

int main() {
    char s[40][40];
    int n;
    int count = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &s[i][j]);
            if (s[i][j] == '#') {
                count++;
                if (count == 6) {
                    printf("Yes");
                }
            } else {
                count = 0;
            }
        }
        if (count > 0) {
            count = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        }
    }
}