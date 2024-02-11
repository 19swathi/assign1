/*To find the length of a linked list using an iterative approach, you need to traverse the list while keeping track of the number of nodes encountered. Here's a step-by-step explanation of how you can do it:

Initialize a Length Counter: Start by initializing a variable to keep track of the length of the linked list. Let's call this variable length and set it to 0 initially.

Traverse the Linked List: Begin traversing the linked list starting from the head node.

Increment Counter for Each Node: For each node encountered during traversal, increment the length counter by 1.

Move to the Next Node: After processing each node, move to the next node in the linked list until you reach the end (i.e., a node whose next pointer is nullptr).

Return the Length: Once the traversal is complete (i.e., you've reached the end of the list), return the value of the length counter. This value represents the total number of nodes in the linked list.

Here's a high-level pseudocode representation of the iterative approach to finding the length of a linked list:*/
#include <iostream>

// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Function to find the length of a linked list iteratively
int lengthOfLinkedList(Node* head) {
    int length = 0; // Initialize length counter

    // Start from the head of the linked list
    Node* current = head;

    // Iterate through the linked list
    while (current != nullptr) {
        length++; // Increment length for each node visited
        current = current->next; // Move to the next node
    }

    return length; // Return the length of the linked list
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node{ 1, new Node{2, new Node{3, new Node{4, new Node{5, nullptr}}}} };

    // Find the length of the linked list
    int length = lengthOfLinkedList(head);

    // Output the length of the linked list
    std::cout << "Length of the linked list: " << length << std::endl; // Output: 5

    return 0;
}
/*Explanation:

In the lengthOfLinkedList function, we initialize a counter variable length to 0.
We then start traversing the linked list from the head node.
For each node encountered, we increment the length counter.
We continue traversing the linked list until we reach the end (i.e., the current pointer becomes null).
Finally, we return the value of length, which represents the length of the linked list.
This approach traverses the entire linked list once, making it efficient and suitable for finding the length of a linked list. It has a time complexity of O(n), where n is the number of nodes in the linked list.*/
