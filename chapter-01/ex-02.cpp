#include <bits/c++config.h>
#include <iostream>

void ReverseCStyleString(char str[]) {
  char *end = str;
  char temp;
  if (str) {
    while (*end) {
      end++;
    }
    end--;
    while (str < end) {
      temp = *str;
      *str++ = *end;
      *end-- = temp;
    }
  }
}

int main() {
  char str[] = {"aykut"};
  ReverseCStyleString(str);
  std::cout << str << std::endl;
  return 0;
}
