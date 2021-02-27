#include <iostream>

struct Node {
  int val;
  Node *next;
};

class LinkedList {
private:
  Node *root = NULL;

public:
  void show() {
    Node *temp = root;
    while (temp != NULL) {
      std::cout << temp->val << std::endl;
      temp = temp->next;
    }
  }

  void push(int val) {
    if (root == NULL) {
      root = new Node;
      root->val = val;
      root->next = NULL;
      return;
    }

    Node *temp = root;
    while (temp->next != NULL)
      temp = temp->next;

    temp->next = new Node;
    temp->next->val = val;
    temp->next->next = NULL;
  }
};

int main() {
  LinkedList list;

  list.push(2);
  list.push(4);
  list.push(8);
  list.push(16);

  list.show();

  return 0;
}
