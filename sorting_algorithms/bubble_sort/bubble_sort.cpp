#include <iostream>

int main() {
    constexpr int size = 6;
    int v_example[size] = { 3, 1, 5, 2, 4, 0 };

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int temp = v_example[i];

            if (v_example[j] < v_example[i]) {
                v_example[i] = v_example[j];
                v_example[j] = temp;
            }
        }
    }

    for (int item : v_example)
        std::cout << item << "\t";
}