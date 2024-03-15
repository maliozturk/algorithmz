//
// Created by muhammetaliozturk on 15/03/24.
//

#include "../include/quicksort.h"
#include "iostream"

void quicksort(std::vector<int> &arr, int lo, int hi) {
    if (hi <= lo)
        return;
    int j = partition(arr, lo, hi);
    quicksort(arr, lo, j-1);
    quicksort(arr, j+1, hi);
}

int partition(std::vector<int> &arr, int lo, int hi) {
    int i = lo;
    int j = hi + 1;
    int v = arr[lo];

    while (true){
        while (v > arr[++i]){
            if (i==hi) break;
        }
        while (v < arr[--j]){
            if (j==lo) break;
        }
        if (i >= j) break;
        exchange(arr, i, j);
    }
    exchange(arr, lo, j);
    return j;
}

void exchange(std::vector<int> &arr, int i, int j) {
    if (i == j)
        return;
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
