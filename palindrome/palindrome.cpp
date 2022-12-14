#include <iostream>
#include <string>

int main() {
    constexpr int size = 7;
    std::string str = "EXAMPLE";
    char to_rev[size];

    // SPLIT
    for (int it = 0; it < size; it++)
        to_rev[it] = str[it];
    
    // REVERSE
    int i, j = 1;

    for (i = 0; i < size; i++) {
        if ((size - j) - i < 0) break;

        char begin = to_rev[i];
        char end = to_rev[size - j];

        to_rev[i] = end;
        to_rev[size - j] = begin;

        j++;
    }

    // SHOW RESULT
    for (auto item : to_rev)
        std::cout << item;
}