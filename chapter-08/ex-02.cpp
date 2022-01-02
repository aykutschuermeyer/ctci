#include <iostream>

void findNumberOfPaths(int *count, int n, int k, int currentN, int currentK)
{
    if (n != currentN)
        findNumberOfPaths(count, n, k, currentN + 1, currentK);

    if (k != currentK)
        findNumberOfPaths(count, n, k, currentN, currentK + 1);

    if (n == currentN && k == currentK)
        (*count)++;
}

int main()
{
    int *numberOfPaths;
    *numberOfPaths = 0;

    findNumberOfPaths(numberOfPaths, 3, 3, 1, 1);

    std::cout << *numberOfPaths << std::endl;
}
