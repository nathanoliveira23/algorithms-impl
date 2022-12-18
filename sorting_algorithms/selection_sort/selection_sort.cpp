#include <iostream>

int main() {
  constexpr int size = 5;
  int v_example[size] = { 3, 5, 2, 1, 4 };

  for (int i = 0; i < size; i++) {
      int min = v_example[i];

      for (int j = i + 1; j < size; j++) {

          if (v_example[j] < min) min = v_example[j];
          else continue;

          v_example[j] = v_example[i];
          v_example[i] = min;
      }
  }

  for (auto sort : v_example)
      std::cout << sort << "\t";
}