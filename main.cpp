#include "TextEditor.h"
#include <iostream>
#include <string>

int main() {
    TextEditor<std::string> editor;

    // Edit the text
    editor.edit("Hello, ");
    editor.edit("world!");

    // Display current state
    std::cout << "Initial State:\n";
    editor.display();

    // Edit more text
    editor.edit(" How are you?");
    std::cout << "\nAfter Editing:\n";
    editor.display();
    
    // Edit additional text
    editor.edit(" I'm doing well, thank you!");
    std::cout << "\nAfter Additional Editing:\n";
    editor.display();

    // Undo the last edit
    editor.undo();
    std::cout << "\nAfter Undoing:\n";
    editor.display();

    // Edit more text
    editor.edit(" This is a new edit after undo.");
    std::cout << "\nAfter New Editing:\n";
    editor.display();

    // Push the current state onto the stack
    editor.pushToStack();

    // Undo the last edit again
    editor.undo();
    std::cout << "\nAfter Undoing Again:\n";
    editor.display();

    // Clear the stack
    editor.clearStack();
    std::cout << "\nAfter Clearing the Stack:\n";
    editor.display();

    // Since clearStack() empties the history, attempting another undo will show there's nothing to undo
    editor.undo();

    return 0;
}
