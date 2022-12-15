#include <iostream>

bool is_palindrome(int);

int main() {
    int example = 404;

    if (is_palindrome(example)) 
        std::cout << "YES";
    else
        std::cout << "NO";
}

bool is_palindrome(int x) {
    int palindrome = 0;
    int temp_x = x;

    while (temp_x > 0) {
        int lastDigit = temp_x % 10;
        palindrome = palindrome * 10 + lastDigit;
        temp_x = temp_x / 10;
    }

    bool is_palindrome = x == palindrome;

    if (!is_palindrome) return false;

    return true;
}