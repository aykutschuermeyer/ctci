#include <iostream>
#include <string>
#include <vector>

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void findPermutations(std::vector<std::string> &permutations, std::string str, int size, int index = 0, int fixed = -1)
{
    if (index == size - 1)
        return;

    for (int i = index; i < size; i++)
    {
        std::string strTemp = str;

        if (i != fixed)
            swap(strTemp[index], strTemp[i]);

        if (index == size - 2)
            permutations.push_back(strTemp);

        findPermutations(permutations, strTemp, size, index + 1, fixed + 1);
    }
}

int main()
{
    std::vector<std::string> permutations;
    std::string str = "abc";

    findPermutations(permutations, str, str.size());

    for (int i = 0; i < permutations.size(); i++)
        std::cout << permutations[i] << std::endl;
}
