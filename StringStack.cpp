#include "StringStack.h"

StringStack() {
 this.stack = new std::vector<std::string>;
}

~StringStack() {
  delete this.stack;
}

void push(std::string str) {
  this.stack.push(str);
}

std::string pop() {
  return this.stack.pop();
}

bool isEmpty() {
  return this.stack.isEmpty();
}
