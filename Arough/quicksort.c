#include <stdio.h>

void quicksort(int arr[], int, int);
int partition(int arr[], int, int);
void swap(int *, int *);

int main() {
    int arr[] = {2, 2, 4, 6, 7, 1};

    quicksort(arr, 0, 5);

    for (int i = 0; i < 6; i++)
        printf(" %d ", arr[i]);

    return 0;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int i = start + 1;
    int j = end;

    while (1) {
        for (; i <= j && arr[i] < pivot; i++)
            ;
        for (; j >= i && arr[j] >= pivot; j--)
            ;

        if (i <= j)
            swap(&arr[i], &arr[j]);
        else
            break;
    }

    swap(&arr[start], &arr[j]);

    return j;
}

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void quicksort(int arr[], int start, int high) {
    if (start < high) {
        int p = partition(arr, start, high);
        quicksort(arr, start, p - 1);
        quicksort(arr, p + 1, high);
    }
}

