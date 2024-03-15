//
// Created by muhammetaliozturk on 15/03/24.
//

#ifndef ALGORITHMZ_QUICKSORT_H
#define ALGORITHMZ_QUICKSORT_H
#include <vector>
#include <iostream>

void quicksort(std::vector<int> &arr, int lo, int hi);

int partition(std::vector<int> &arr, int lo, int hi);

void exchange(std::vector<int> &arr, int i, int j);

#endif //ALGORITHMZ_QUICKSORT_H
