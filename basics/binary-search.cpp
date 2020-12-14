#include <iostream>
#include <vector>

int BinarySearch(std::vector<int> arr, int x, int left, int right) {
  int mid = (left + right) / 2;
  if (x == arr[mid])
    return mid;
  else if (x < arr[mid])
    return BinarySearch(arr, x, left, mid - 1);
  else if (x > arr[mid])
    return BinarySearch(arr, x, mid + 1, right);
  else
    return -1;
}

int main() {
  std::vector<int> arr{2, 5, 8, 12, 16, 23, 38, 56, 72, 91, 111};
  std::cout << BinarySearch(arr, 23, 0, arr.size() - 1) << std::endl;
  return 0;
}
