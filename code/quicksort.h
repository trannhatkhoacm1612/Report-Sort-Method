#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <iostream>
using namespace std;
#define si 1000000
void quickSort(double arr[], int left, int right) {
    if (left >= right) return;
    double pivot = arr[(left + right) / 2];
    int i = left, j = right;
    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    quickSort(arr, left, j);
    quickSort(arr, i, right);
}



#endif