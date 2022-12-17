#include <iostream>
#include <string>

int main() {
    std::string str = "EXAMPLE";
    std::string palindrome = "";

    for (int i = str.size(); i >= 0; i--)
        palindrome += str[i];

    std::cout << palindrome << std::endl;
}