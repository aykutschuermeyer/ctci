#include <iostream>
#include <map>
#include <string>

bool AllUnique(std::string str) {
  std::map<char, int> letterCount;
  for (int i = 0; i < str.length(); i++) {
    letterCount[str[i]]++;
    if (letterCount[str[i]] > 1)
      return false;
  }
  return true;
}

int main() {
  std::string str = "abcdefg";
  std::cout << AllUnique(str) << std::endl;

  str = "abcdeag";
  std::cout << AllUnique(str) << std::endl;
}
