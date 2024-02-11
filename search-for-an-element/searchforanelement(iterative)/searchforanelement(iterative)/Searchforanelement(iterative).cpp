/*/Iterative Approach :
Advantages:
Efficiency: Iterative approach typically requires less memory overhead compared to recursion, making it more memory efficient, especially for large linked lists.
Simplicity : Iterative approach often involves simpler code structures, which can be easier to understandand debug for programmers who are new to recursion.
Disadvantages :
    Code Length : Iterative code might be longerand more verbose compared to recursive code, especially for complex operations.
    Limited Clarity : In some cases, iterative code might be less clearand more prone to errors compared to recursive code, especially for complex operations.
    */
   // Code Example(Iterative Approach) :
#include <iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to search for an element in the linked list iteratively
bool searchElement(Node* head, int key) {
    Node* current = head; // Start from the head node

    // Traverse the linked list
    while (current != nullptr) {
        // If key is found, return true
        if (current->data == key) {
            return true;
        }
        // Move to the next node
        current = current->next;
    }

    // Key not found
    return false;
}
/*Comparison:
Efficiency: Generally, the iterative approach is more efficient in terms of both time and space complexity, especially for large input sizes.
Simplicity: Recursive solutions can be simpler to write and understand for certain problems, but they may introduce additional overhead and potential stack overflow issues.
Readability: Recursive solutions may be more readable for those familiar with recursion, but iterative solutions might be more intuitive for others.
Space Complexity: Iterative solutions typically have better space complexity due to the absence of function call overhead.
Performance: In most cases, iterative solutions outperform recursive solutions due to reduced overhead.
In summary, while both approaches have their own advantages and disadvantages, the choice between them often depends on factors such as problem complexity, personal preference, and performance considerations. For most cases, the iterative approach is preferred due to its efficiency and lower space complexity.*/
