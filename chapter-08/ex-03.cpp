#include <iostream>
#include <vector>

void findSubsets(std::vector<std::vector<int>> &subsets, std::vector<int> arr, std::vector<int> currentSubset, int index)
{
    if (index == arr.size())
    {
        subsets.push_back(currentSubset);
        return;
    }

    findSubsets(subsets, arr, currentSubset, index + 1);

    currentSubset.push_back(arr[index]);
    findSubsets(subsets, arr, currentSubset, index + 1);
}

int main()
{
    std::vector<int> arr = {1, 2, 3};
    std::vector<std::vector<int>> subsets;

    findSubsets(subsets, arr, {}, 0);

    for (int i = 0; i < subsets.size(); i++)
    {
        for (int j = 0; j < subsets[i].size(); j++)
            std::cout << subsets[i][j] << " ";
        std::cout << std::endl;
    }
}
