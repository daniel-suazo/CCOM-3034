#include <iostream>

using namespace std;

typedef int ElementType;

class Node {
  public:
    ElementType data;
    Node *next;
    Node(ElementType d = 0, Node *n = NULL): data(d), next(n) {} 
};

class Stack {
  private:
    Node* top;
  public:
    Stack() {top = NULL;}
    void push(ElementType e);
    ElementType getTop() const;
    void pop();
    bool empty() const;
};