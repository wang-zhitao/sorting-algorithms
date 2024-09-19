#include "head.h"

void quickSort(std::vector<int> &vec, int left, int right) {
    if (left >= right)
        return;

    // int base = vec[(left + right) / 2];
    int base = vec[left];
    int begin = left - 1;
    int end = right + 1;

    while (begin < end) {
        do {
            begin++;
        } while (vec[begin] < base);

        do {
            end--;
        } while (vec[end] > base);

        if (begin < end)
            swap(vec[begin], vec[end]);
    }

    quickSort(vec, left, end);
    quickSort(vec, end + 1, right);
}