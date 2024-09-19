#include "head.h"

void selectSort(vector<int> &vec) {
    int size = vec.size();
    for (size_t i = 0; i < size - 1; i++) {
        int minPos = i;
        for (int j = i + 1; j < size; j++) {
            if (vec[j] < vec[minPos]) {
                minPos = j;
            }
        }
        if (minPos != i) {
            swap(vec[i], vec[minPos]);
        }
    }
}
