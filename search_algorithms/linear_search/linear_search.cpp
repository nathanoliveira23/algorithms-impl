#include <iostream>

int linear_search(int [], int, int);

int main() {
    constexpr int size = 5;
    int example[size] = { 12, 32, 5, 43, 25 };

    int search = linear_search(example, size, 43);

    std::cout << search << std::endl;
}

int linear_search(int v[], int size, int value) {
    int pos, i;

    for (i = 0; i < size; i++) {
        if (v[i] == value) {
            pos = i;
            break;
        }
    }

    return pos;
}