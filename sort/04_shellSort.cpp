#include "head.h"

void shelltSort(vector<int> &vec) {
    int size = vec.size();
    for (size_t gap = size / 2; gap > 0; gap /= 2) {
        for (size_t i = gap; i < size; i++) {
            int temp = vec[gap];
            int j = i - gap;
            while (j >= 0 && vec[j] > temp) {
                vec[j + gap] = vec[j];
                j -= gap;
            }
            vec[j + gap] = temp;
        }
    }
}
