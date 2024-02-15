#include<stdio.h>
#include<stdlib.h>

void merge(int a[], int low, int high, int mid) {
    int i = low, j = mid + 1, k = low, b[high - low + 1];

    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= high) {
        b[k] = a[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        a[i] = b[i - low];
    }
}

void print(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", a[i]);
    }
}

void me(int a[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        me(a, low, mid);
        me(a, mid + 1, high);
        merge(a, low, high, mid);
    }
}

int main() {
    int arr[5] = {9383, 2, 1212, 1, 5};
    print(arr, 5);
    me(arr, 0, 4);
    printf("After sorting algo..\n");
    print(arr, 5);
    return 0;
}
