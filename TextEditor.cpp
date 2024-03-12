#include "TextEditor.h"
#include <iostream>
#include <string>

// Explicit instantiation for std::string
template class TextEditor<std::string>;

template<>
TextEditor<std::string>::TextEditor() : content(""), operationStack() {}

template<>
void TextEditor<std::string>::edit(const std::string& newContent) {
    operationStack.push(content); // Save the current state before editing
    content = newContent; // Update the content
}

template<>
void TextEditor<std::string>::undo() {
    if (!operationStack.isEmpty()) {
        content = operationStack.pop(); // Revert to the previous state
    } else {
        std::cout << "Nothing to undo." << std::endl;
    }
}

template<>
void TextEditor<std::string>::display() const {
    std::cout << "Content: " << content << std::endl;
}

template<>
void TextEditor<std::string>::pushToStack() {
    operationStack.push(content);
}

template<>
void TextEditor<std::string>::clearStack() {
    operationStack.clearStack();
}
