#ifndef _STRINGSTACK_
#define _STRINGSTACK_
#include <string>
#include <vector>

class StringStack implements TrueStack {
  public:
    StringStack();
    //virtual std::string pop() = 0;
    //virtual void push(std::string) = 0;
    //virtual bool isEmpty() = 0;
  private:
    std::vector<std::string> stack;
};

#endif
