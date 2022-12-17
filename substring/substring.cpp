#include <iostream>
#include <string>

std::string substring(std::string str, int initial, int end);

int main() {
    std::string example = "testing";
    std::string substr = substring(example, 1, 4);

    std::cout << substr << std::endl;
}

std::string substring(std::string str, int initial, int end) {
    std::string substr = "";

    for (int i = initial; i < end; i++) {
        substr += str[i];
    }

    return substr;
}