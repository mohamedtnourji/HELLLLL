#include <iostream>
#include <vector>
#include <algorithm>
#include "tnourji.h"
using namespace std;
int find_max_index(int arr[], int size) {
    int max_value = arr[0];
    int max_index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > max_value){
            max_value = arr[i];
            max_index = i;
         }
    }
    return max_index;
}

int find_min_index(int arr[], int size) {
    int min_value = arr[0];
    int min_value = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min_value) {
            min_value = arr[i];
            min_value = i;
        }
    }
    return min_value;
}

int binary_search(int arr[], int size, int value) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] < value) {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

void bouble_sort(int arr[],int size) {
    for (size_t i = 0; i < size-1; i++)
    {
        for (size_t j = 0; j < size - 1 - i ; j++)
        {
            if (arr[i] < arr[j + 1]) {
                swap(arr[i], arr[j + 1]);
            }
        }
    }
    cout << "sorted succed✅" << '\n';
}

int main() {
   int arr[] = {102,2,9,6,8,6,99,77,5,44,828,2,8};
   cout << find_max_index(arr, 13);
    return 0;
}