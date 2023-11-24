#include "../includes/insertion_sort.hpp"

void swap(int &a, int &b)
{
    int aux = b;
    b = a;
    a = aux;
}

void insertion_sort(int arr[], int len)
{
    int i, j, aux;

    for (i = 0; i < len - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            aux = arr[i + 1];
            swap(arr[i], arr[i + 1]);

            j = i - 1;

            while (j >= 0) {
                if (aux < arr[j])
                    swap(arr[j], arr[j + 1]);
                else
                    break;

                j -= 1;
            }
        }
    }
}

void print_arr(const int arr[], int len)
{
    for (int i = 0; i < len; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
