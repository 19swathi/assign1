/*Sure! The recursive approach for reversing a linked list involves breaking down the problem into smaller subproblems and solving them recursively. Here's how you can implement the recursive method for reversing a linked list:

Base Case: The base case for the recursion occurs when either the list is empty (head is null) or it has only one node. In this case, there's no need to reverse anything, so we simply return the head.

Recursive Step: For the recursive step, we assume that we have already reversed the rest of the list starting from the second node. Then, we need to reverse the link between the first node (head) and the second node.

Reversing Links: To reverse the link between the first and second nodes, we make the next node of the current head point back to the head itself. Then, we make the current head's next pointer null to break the link.

Returning New Head: After reversing the link, the second node becomes the new head of the reversed list. So, we return this new head to the previous level of recursion.

*/
/*The recursive approach to reverse a linked list differs from the iterative approach in its methodology and implementation. Here's a comparison between the two approaches and potential challenges associated with the recursive approach:

Differences:
Methodology:

Iterative Approach: The iterative approach involves traversing the list iteratively and modifying the pointers to reverse the direction of the links.
Recursive Approach: The recursive approach breaks down the problem into smaller subproblems, recursively reverses the rest of the list starting from the second node, and then reverses the link between the first and second nodes.
Implementation:

Iterative Approach: In the iterative approach, we use a loop to traverse the list and reverse the links step by step.
Recursive Approach: In the recursive approach, we use recursive function calls to reverse the list, with each call handling a smaller part of the list.
Potential Challenges with Recursive Approach:
Stack Overflow:

Recursive calls consume stack space, and excessive recursion can lead to stack overflow errors, especially for large linked lists. Each recursive call adds a new frame to the call stack, and if the recursion depth becomes too large, it can exhaust the available stack space.
Difficulty in Debugging:

Recursive functions can be more challenging to debug compared to iterative functions. Understanding the flow of execution and tracking variables can be complex, especially for deeply nested recursion.
Performance Overhead:

Recursive calls involve function call overhead, which can impact performance compared to the iterative approach. The overhead includes parameter passing, stack frame creation, and returning values from function calls.
Extra Space Complexity:

Recursive calls may require additional memory for function call stack, which can increase space complexity compared to the iterative approach.*/
#include <iostream>

// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize data and next pointer
    Node(int d) : data(d), next(nullptr) {}
};

// Function to reverse a linked list recursively
Node* reverseLinkedListRecursive(Node* head) {
    // Base case: if list is empty or has only one node, return head
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Recursively reverse the rest of the list starting from the second node
    Node* newHead = reverseLinkedListRecursive(head->next);

    // Reverse the link between head and the second node
    head->next->next = head; // Make the next node of current head point back to head
    head->next = nullptr; // Make current head's next pointer null to break the link

    // Return the new head of the reversed list
    return newHead;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Print the original linked list
    std::cout << "Original linked list: ";
    printLinkedList(head); // Output: 1 2 3 4 5

    // Reverse the linked list recursively
    head = reverseLinkedListRecursive(head);

    // Print the reversed linked list
    std::cout << "Reversed linked list: ";
    printLinkedList(head); // Output: 5 4 3 2 1

    return 0;
}
/*Explanation:
In the reverseLinkedListRecursive function, we have a base case that checks if the list is empty or has only one node. If it is, we return the head.
Otherwise, we recursively reverse the rest of the list starting from the second node.
After the recursion, the newHead will be pointing to the last node of the original list, which becomes the new head of the reversed list.
We then reverse the link between the current head and the second node by making the next node of the current head point back to the head itself and breaking the link by setting the current head's next pointer to null.
Finally, we return the new head of the reversed list.*/