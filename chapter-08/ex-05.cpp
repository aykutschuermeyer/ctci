#include <iostream>
#include <string>

void printCombinations(int n, int numOpen = 0, int numClosed = 0, std::string parentheses = "")
{
    if (numOpen == n && numClosed == n)
    {
        std::cout << parentheses << std::endl;
        return;
    }

    if (numClosed == numOpen)
        printCombinations(n, numOpen + 1, numClosed, parentheses + "(");
    else
    {
        if (numOpen < n)
            printCombinations(n, numOpen + 1, numClosed, parentheses + "(");
        printCombinations(n, numOpen, numClosed + 1, parentheses + ")");
    }
}

int main()
{
    printCombinations(3);
}
