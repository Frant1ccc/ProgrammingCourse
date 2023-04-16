#include <stdio.h>

#define N 7

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

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void selectionSort(int *a, const int n) {
    for (int i = 0; i < n - 1; i++) {
        int minPos = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minPos]) {
                minPos = j;
            }
        }
        swap (&a[i], &a[minPos]);
    }
}

int fastLinearSearch(int *a, const int n, int x) {
    a[n] = x;

    int i = 0;
    while (a[i] != x) {
        i++;
    }

    return i;
}

int linearFindFast(int *a, const int n, int x) {
    a[n] = x;

    int i = 0;
    while (a[i] != x) {
        i++;
    }

    return i;
}
long long power(int a, int n) {
    long long x = a;
    long long res = 1;
    while (n != 0) {
        if (n & 1) {
            res *= x;
        }
        n >>= 1;
        x *= x;
    }

    return res;
}

int binarySearch(const int *a, const int n, const int x) {
    int left = -1;
    int right = n;
    while (right - left > 1) {
        int middle = (left + right) / 2;
        if (a[middle] < x) {
            left = middle;
        } else {
            right = middle;
        }
    }

    return right;
}

int main() {
    int a[5] = {5, 2, 3, 1, 7};
    selectionSort(a, 5);
    outputArray(a, 5);
    //printf("%lld", power(5, 4));
    return 0;
}