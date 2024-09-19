#include "head.h"
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
    srand(time(NULL));
    vector<int> data;
    cout << "排序前的原始数据: ";
    for (int i = 0; i < 20; ++i) {
        data.push_back(rand() % 100);
        cout << data.back() << " ";
    }
    cout << endl;

    auto start = chrono::high_resolution_clock::now();
    // bubbleSort(data);
    // selectSort(data);
    // insertSort(data);
    shelltSort(data);
    // quickSort(data, 0, data.size() - 1);
    // mergeSort(data, 0, data.size() - 1);
    // heapSort(data);
    // radixSort(data);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> tm = end - start; // 毫秒

    cout << "排序之后的数据: ";
    for (const auto &item : data) {
        cout << item << " ";
    }
    cout << endl;

    std::cout << "time: " << tm.count() << "ms" << endl;

    return 0;
}
