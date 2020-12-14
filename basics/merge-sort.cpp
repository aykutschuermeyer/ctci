#include <iostream>

void Merge(int arr[], int left, int mid, int right) {
  int sizeLeft = mid - left + 1;
  int sizeRight = right - mid;

  int arrLeft[sizeLeft], arrRight[sizeRight];

  for (int i = 0; i < sizeLeft; i++) {
    arrLeft[i] = arr[left + i];
  }

  for (int j = 0; j < sizeRight; j++) {
    arrRight[j] = arr[mid + 1 + j];
  }

  int i = 0, j = 0, k = left;

  while (i < sizeLeft && j < sizeRight) {
    if (arrLeft[i] <= arrRight[j]) {
      arr[k] = arrLeft[i];
      i++;
    } else {
      arr[k] = arrRight[j];
      j++;
    }
    k++;
  }

  while (i < sizeLeft) {
    arr[k] = arrLeft[i];
    i++;
    k++;
  }

  while (j < sizeRight) {
    arr[k] = arrRight[j];
    j++;
    k++;
  }
}

void MergeSort(int arr[], int left, int right) {
  if (left >= right)
    return;
  int mid = (left + right - 1) / 2;
  MergeSort(arr, left, mid);
  MergeSort(arr, mid + 1, right);
  Merge(arr, left, mid, right);
}

int main() {
  int arr[] = {3, 7, 2, 110, 23, 25, 16, 14, 55, 70, 12, 23, 23, 7};
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  MergeSort(arr, 0, arrSize - 1);

  for (int i = 0; i < arrSize; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
