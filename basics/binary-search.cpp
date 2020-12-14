#include <iostream>

int BinarySearch(int arr[], int x, int left, int right) {
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
  int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91, 111};
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  std::cout << BinarySearch(arr, 23, 0, arrSize - 1) << std::endl;
  return 0;
}
