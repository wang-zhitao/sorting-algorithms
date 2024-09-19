#include "head.h"

void mergeSort(std::vector<int> &vec, int left, int right) {
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    mergeSort(vec, left, mid);
    mergeSort(vec, mid + 1, right);

    int i = left, j = mid + 1;
    vector<int> tmp;
    tmp.reserve(right - left + 1);
    while (i <= mid && j <= right) {
        if (vec[i] <= vec[j]) {
            tmp.push_back(vec[i++]);
        } else {
            tmp.push_back(vec[j++]);
        }
    }

    while (i <= mid) {
        tmp.push_back(vec[i++]);
    }

    while (j <= right) {
        tmp.push_back(vec[j++]);
    }

    int k = 0;
    for (size_t i = left; i <= right; i++) {
        vec[i] = tmp[k++];
    }
}