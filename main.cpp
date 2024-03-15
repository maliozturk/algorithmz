#include <iostream>
#include "quicksort.h"
#include <vector>

int main() {
    // sorting algorithms
    // sample array
    std::vector<int> random_arr = {7,1,-5,10,6,23,-9,101,25};

    exchange(random_arr, 0, 2);
    exchange(random_arr, 2, 0);
    for (int i : random_arr)
        std::cout << i << ",";
    std::cout << "\n";

    //std::cout << partition(random_arr, 0, 8) << std::endl;

    //for (int i : random_arr)
    //    std::cout << i << ",";
    //std::cout << "\n";

    int lo = 0;
    int hi;
    hi = random_arr.size() - 1;
    quicksort(random_arr, lo, hi);

    for (int i : random_arr)
        std::cout << i << ",";
    std::cout << "\n";
    return 0;
}
