/*iterative approach
Certainly! The iterative approach to reverse a linked list involves traversing the list while modifying the pointers to reverse the direction of the links. Here's how it works:

Initialize Pointers: We start by initializing three pointers: prev, current, and nextNode.

prev: Pointer to the previous node, initially set to nullptr.
current: Pointer to the current node, initially set to the head of the linked list.
nextNode: Pointer to the next node, initially set to nullptr.
Traverse and Reverse Links: We traverse the linked list iteratively. For each node encountered:

We store the next node (nextNode) to avoid losing the reference.
We reverse the link of the current node to point to the previous node (prev).
We move prev to current and current to nextNode to proceed to the next node.
Update Head: Once the traversal is complete, prev will be pointing to the last node of the original list, which is now the first node of the reversed list. So, we update the head pointer to point to prev.

Return New Head: We return the updated head pointer, which now points to the first node of the reversed list.*/
#include <iostream>

// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Function to reverse a linked list iteratively
Node* reverseLinkedListIterative(Node* head) {
    Node* prev = nullptr; // Pointer to the previous node
    Node* current = head; // Pointer to the current node
    Node* nextNode = nullptr; // Pointer to the next node

    // Traverse the list and reverse the links
    while (current != nullptr) {
        nextNode = current->next; // Store the next node
        current->next = prev; // Reverse the link
        prev = current; // Move prev to current node
        current = nextNode; // Move current to next node
    }

    // Update head to point to the last node (prev)
    head = prev;

    return head; // Return the new head of the reversed list
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
    Node* head = new Node{ 1, new Node{2, new Node{3, new Node{4, new Node{5, nullptr}}}} };

    // Print the original linked list
    std::cout << "Original linked list: ";
    printLinkedList(head); // Output: 1 2 3 4 5

    // Reverse the linked list iteratively
    head = reverseLinkedListIterative(head);

    // Print the reversed linked list
    std::cout << "Reversed linked list: ";
    printLinkedList(head); // Output: 5 4 3 2 1

    return 0;
}
/*In the reverseLinkedListIterative function, we maintain three pointers: prev, current, and nextNode.
We initialize prev to nullptr to mark the end of the reversed list.
We start traversing the original list from the head node.
In each iteration, we update the nextNode pointer to store the next node in the original list.
We then reverse the link of the current node to point to the prev node.
After reversing the link, we move prev to current, current to nextNode, and continue the traversal.
Once the traversal is complete, prev will be pointing to the last node of the original list, which is now the first node of the reversed list.
Finally, we update the head pointer to point to the new first node of the reversed list (i.e., prev).
This iterative approach efficiently reverses the linked list by traversing it only once, making it suitable for reversing the direction of the links without using recursion.*/