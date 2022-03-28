#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int a[1000] = {0};
    int c[1000] = {0};
    int count = 1;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &a[i]);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[i]) {
                int t;
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
