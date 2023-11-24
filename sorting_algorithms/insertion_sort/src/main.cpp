#include "../includes/insertion_sort.hpp"

int main()
{
    constexpr int len = 10;
    int vet[len];

    srand(time(NULL));

    for (int i = 0; i < len; i++)
        vet[i] = rand() % 20;

    std::cout << "Before insertion sort:" << std::endl;
    print_arr(vet, len);

    insertion_sort(vet, len);
    
    std::cout << std::endl;

    std::cout << "After insertion sort:" << std::endl;
    print_arr(vet, len);

    return 0;
}

