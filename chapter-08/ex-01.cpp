#include <iostream>

int generateNthFibonacci(int n, int current = 3, int first = 1, int second = 1)
{
    if (n == 0)
        return 0;

    if (n < 3)
        return 1;

    if (n == current)
        return first + second;

    return generateNthFibonacci(n, current + 1, second, first + second);
}

int main()
{
    for (int i = 0; i <= 30; i++)
        std::cout << generateNthFibonacci(i) << std::endl;
}
