#include <Algorithms.h>

template<typename T>
T select(T array[], int low, int high, int position) {
    int pi = partition(array, low, high);
    if (pi < position) return select(array, low, pi - 1, position);
    int numberOfPivot = 1; // there must be at least one pivot element
    while (pi + numberOfPivot <= high && array[pi + numberOfPivot] == array[]) numberOfPivot++;
    if (numberOfPivot + pi >= position) return array[pi];
    return select(array, pi + numberOfPivot, high, position - pi - numberOfPivot);
}

template<typename T>
void quickSort(T array[], int low, int high) {
    if (low < high) {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        int pi = partition(array, low, high);
 
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

template<typename T>
void swap(T* a, T* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

template<typename T>
int partition(T array[], int low, int high) {
    int pivot = array[low];
    int i = low;

    for (int j = low; j < high; j++) {
        if (array[j] < pivot) {
            swap(&array[j], &array[i]);
            i++;
        }
    }

    return i;
}