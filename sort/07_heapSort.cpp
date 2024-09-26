#include "head.h"

// void heapAdjust(vector<int> &vec, int len, int parent) {
//     int largest = parent;
//     int left = 2 * parent + 1;
//     int right = 2 * parent + 2;

//     if (left < len && vec[left] > vec[largest])
//         largest = left;
//     if (right < len && vec[right] > vec[largest])
//         largest = right;
//     if (largest != parent) {
//         swap(vec[largest], vec[parent]);
//         heapAdjust(vec, len, largest);
//     }
// }

void heapAdjust(vector<int> &vec, int len, int parent) {

    while (true) {
        int largest = parent;
        int left = 2 * parent + 1;
        int right = 2 * parent + 2;
        if (left < len && vec[left] > vec[largest])
            largest = left;
        if (right < len && vec[right] > vec[largest])
            largest = right;
        if (largest == parent)
            break;
        swap(vec[largest], vec[parent]);
        parent = largest;
    }
}

void heapSort(vector<int> &vec) {
    int size = vec.size();
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapAdjust(vec, size, i);
    }

    for (size_t i = size - 1; i > 0; --i) {
        swap(vec[0], vec[i]);
        heapAdjust(vec, i, 0);
    }
}
