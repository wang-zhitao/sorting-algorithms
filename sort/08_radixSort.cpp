#include "head.h"

void radixSort(vector<int> &vec) {
    int max = 0;
    for (size_t i = 0; i < vec.size(); i++) {
        if (max < vec[i]) {
            max = vec[i];
        }
    }
    int len = to_string(max).length();
    vector<vector<int>> bucket;
    int mod = 10;
    int dev = 1;

    for (size_t i = 0; i < len; i++) {
        bucket.resize(10);
        for (size_t j = 0; j < vec.size(); j++) {
            int num = vec[j] % mod / dev;
            bucket[num].push_back(vec[j]);
        }

        int index = 0;
        for (const auto &it : bucket) {
            for (const auto &num : it) {
                vec[index++] = num;
            }
        }
        mod *= 10;
        dev *= 10;
        bucket.clear();
    }
}