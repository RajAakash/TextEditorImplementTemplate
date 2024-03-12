#include "OperationStack.h"
#include <string>

// Explicit instantiation for std::string
template class OperationStack<std::string>;

template<>
void OperationStack<std::string>::push(const std::string& operation) {
    undoStack.push(operation);
}

template<>
std::string OperationStack<std::string>::pop() {
    if (!undoStack.empty()) {
        std::string topOperation = undoStack.top();
        undoStack.pop();
        return topOperation;
    } else {
        return std::string(); // Return an empty string if the stack is empty
    }
}

template<>
void OperationStack<std::string>::clearStack() {
    while (!undoStack.empty()) {
        undoStack.pop();
    }
}

template<>
bool OperationStack<std::string>::isEmpty() const {
    return undoStack.empty();
}
