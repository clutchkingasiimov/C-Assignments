#include <iostream> 
#include "stack.hpp"

int main(int argc, char const *argv[]){
    Stack<int> s (10);
    s.push(69);
    s.push(420);
    s.pop();
    // s.pop();
    // s.pop();
    s.print();
    return 0;
}
