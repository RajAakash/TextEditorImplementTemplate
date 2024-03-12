#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include "OperationStack.h"
#include <string> // Include for std::string type usage

template<typename T>
class TextEditor {
private:
    T content;
    OperationStack<T> operationStack;

public:
    TextEditor();
    void edit(const T& newContent);
    void undo();
    void display() const;
    void pushToStack();
    void clearStack();
};

#endif // TEXTEDITOR_H
