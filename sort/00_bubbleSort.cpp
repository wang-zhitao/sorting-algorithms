#include "head.h"

void bubbleSort(vector<int> &vec) {
    int size = vec.size();
    for (size_t i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (size_t j = 0; j < size - 1 - i; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}
