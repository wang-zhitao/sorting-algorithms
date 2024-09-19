#pragma once
#include <chrono>
#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &vec);
void selectSort(vector<int> &vec);
void insertSort(vector<int> &vec);
void shelltSort(vector<int> &vec);
void quickSort(vector<int> &vec, int left, int right);
void mergeSort(std::vector<int> &vec, int left, int right);
void heapSort(vector<int> &vec);
void radixSort(vector<int> &vec);