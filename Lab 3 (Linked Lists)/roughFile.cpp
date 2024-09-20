#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
  int data;
  Node* next;
  Node(int d) {
    data = d;
    next = NULL;
  }

  void insertAtHead(Node* &head, int d) {
    if (head == NULL) {
      head = new Node(d);
      return;
    }
    Node* n = new Node(d);
    n->next = head;
    head = n;
  }

  void insertAtTail(Node* &head, int d) {
    if (head == NULL) {
      head = new Node(d);
      return;
    }
    Node* tail = head;
    while (tail->next != NULL) {
      tail = tail->next;
    }
    tail->next = new Node(d);
    return;
  }

  void print(Node* head) {
    while (head != NULL) {
      cout << head->data << " -> ";
      head = head->next;
    }
    cout << "NULL" << endl;
  }
};

int main() {
  Node* head = NULL; 
  cout << "Empty List:" << endl;
  head->print(head);

  head->insertAtHead(head, 10);
  head->insertAtTail(head, 20);
  head->insertAtTail(head, 30);
  cout << "List:" << endl;
  head->print(head);

  head->insertAtHead(head, 40);
  cout << "List after insertion:" << endl;
  head->print(head);

  return 0;
}