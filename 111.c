#include "stdio.h"

void inputArray(int *a, const int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void outputArray(const int *a, const int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void withoutRepetition (int *a, const int n, int *b, const int m) {
    int p = n + m;
    int c[p];
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }

    for (int j = 0; j < m; j++) {
        for (int k = 0; k < n; k++) {
            if
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    inputArray(a, n);
    outputArray(a, n);

    return 0;
}