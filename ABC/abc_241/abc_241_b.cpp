#include <cstdio>

int main() {
    int pa[2000];
    int pb[2000];
    int n, m;
    int flag = 0;
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &pa[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf(" %d", &pb[i]);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (pb[i] == pa[j]) {
                flag++;
                pa[j] = 0;
                break;
            } else
                flag = 0;
        }
        if (flag == 0) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}