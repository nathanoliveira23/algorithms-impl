#include <iostream>

void quick_sort(int arr[], int begin, int end);


int main() {
    constexpr int size = 6;
    int v_example[size] = { 21, 14, 53, 42, 65, 10 };

    quick_sort(v_example, 0, size);

    for (int numbers : v_example) 
        std::cout << numbers << "\t";
}


void quick_sort(int arr[], int begin, int end) {
    int pivot, aux;
    int i, j;

    i = begin;
    j = end - 1;
    pivot = arr[(begin + end) / 2];

    while (i <= j)
    {
        while (arr[i] < pivot && i < end)
            i++;
        
        while (arr[j] > pivot && j > begin)
            j--;

        if (i <= j) {
            aux = arr[i];

            arr[i] = arr[j];
            arr[j] = aux;

            i++; j++;
        }
    }

    if (j > begin) quick_sort(arr, begin, j);
    if (i < end) quick_sort(arr, i, end);
    
}