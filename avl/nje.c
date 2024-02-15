#include <stdio.h>

void merge(int *a, int left, int mid, int right) {
    int n1 = mid - left + 1; 
    
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    // Merge the temporary arrays back into a[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int *a, int left, int right) {
    if (left < right) {
        // Same as (left+right)/2, but avoids overflow for large left and right
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);

        // Merge the sorted halves
        merge(a, left, mid, right);
    }
}

void print(int *a, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", a[i]);
    }
}

int main() {
    int a[6] = {43, 232, 1, 2, 66 ,1};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Original array:\n");
    print(a, size);

    // Perform merge sort
    mergeSort(a, 0, size - 1);

    printf("\nSorted array:\n");
    print(a, size);

    return 0;
}
