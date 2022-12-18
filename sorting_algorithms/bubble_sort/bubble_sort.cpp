#include <iostream>

int main() {
    constexpr int size = 6;
    int v_example[size] = { 3, 1, 5, 2, 4, 0 };

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            int temp = v_example[j];

            if (v_example[j] > v_example[j + 1]) {
                v_example[j] = v_example[j + 1];
                v_example[j + 1] = temp;
            }
        }
    }

    for (int item : v_example)
        std::cout << item << "\t";
}