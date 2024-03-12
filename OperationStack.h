#ifndef OPERATIONSTACK_H
#define OPERATIONSTACK_H

#include <stack>

template<typename T>
class OperationStack {
private:
    std::stack<T> undoStack;

public:
    void push(const T& operation);
    T pop();
    void clearStack();
    bool isEmpty() const;
};

#endif // OPERATIONSTACK_H
