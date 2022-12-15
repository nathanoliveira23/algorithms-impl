#include <iostream>

int binary_search(int [], int, int);

int main() {
    constexpr int size = 7;
    int example[size] = { 1, 4, 9, 21, 40, 52, 55 };
    int value = 52;

    int position = binary_search(example, size, value);

    std::cout << "the value " << value << " was found at index " << position << std::endl;
}


int binary_search(int v[], int size, int value) {
    int begin = 0, end = size - 1;
    int mid, pos = 0;

    while (end - begin >= 0) {
        mid = (end + begin) / 2;

        if (value == v[mid]) {
            pos = mid;
            break;
        }
        else if (value > v[mid]) {
            begin = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return pos;
}