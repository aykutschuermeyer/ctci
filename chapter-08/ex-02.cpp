#include <iostream>

void findNumberOfPaths(int *count, int n, int k, int currentN = 1, int currentK = 1)
{
    if (currentN != n)
        findNumberOfPaths(count, n, k, currentN + 1, currentK);

    if (currentK != k)
        findNumberOfPaths(count, n, k, currentN, currentK + 1);

    if (currentN == n && currentK == k)
        (*count)++;
}

int main()
{
    int numberOfPaths = 0;
    findNumberOfPaths(&numberOfPaths, 3, 3);

    std::cout << numberOfPaths << std::endl;
}
