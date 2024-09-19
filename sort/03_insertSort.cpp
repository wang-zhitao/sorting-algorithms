#include "head.h"

void insertSort(vector<int> &vec) {
    int size = vec.size();
    for (size_t i = 1; i < size; i++) {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}
