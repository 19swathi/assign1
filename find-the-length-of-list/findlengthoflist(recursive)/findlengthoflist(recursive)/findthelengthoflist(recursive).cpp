/*Recursive Approach to Find Length of a Linked List:
Base Case: The function should have a base case to terminate the recursion. In this case, the base case occurs when the current node is nullptr, indicating the end of the list. When this happens, the function returns 0, as there are no more nodes to count.

Recursive Call: The function should make a recursive call to itself with the next node in the list. This recursive call effectively traverses the list node by node until it reaches the end.

Counting Nodes: For each recursive call, increment a counter to keep track of the number of nodes encountered.

Return Length: Once the base case is reached and the recursion unwinds, return the accumulated count of nodes.

Termination Conditions:
----------------------
The termination condition in the recursive approach to finding the length of a linked list is when the function encounters a nullptr, indicating the end of the list. This is the base case of the recursion, where the function should return 0 as there are no more nodes to count.
how recursive process works in finding length of a linked list
ChatGPT
The recursive process for finding the length of a linked list involves breaking down the problem into smaller subproblems until reaching a base case. Here's how it works step by step:
*/
/*Base Case:

The recursive function starts by checking for a base case. In this case, the base case occurs when the current node is nullptr, indicating the end of the list. At this point, the function returns 0 because there are no nodes to count.
Recursive Call:

If the current node is not nullptr, the function makes a recursive call to itself with the next node in the list (head->next). This recursive call is like solving a smaller instance of the same problem, where the list is shorter by one node.
Returning Length:

As the recursion unwinds (i.e., as the function returns from each recursive call), each invocation adds 1 to the result obtained from the recursive call. This effectively counts the nodes as the recursion progresses.
Termination:

The recursion continues until the base case is reached, where the function encounters a nullptr. At this point, the recursion stops, and the accumulated count (which represents the length of the list) is returned back through the call stack.
Aggregating Results:

As the recursion unwinds, each recursive call returns its own count of nodes. These counts are aggregated and added together as the recursion unwinds back to the original caller.
*/
/*Final Result:

Finally, the original caller of the recursive function receives the total count, which represents the length of the entire linked list.
Example:
Let's consider the following linked list: 3 -> 7 -> 10 -> 5 -> nullptr.

The initial call to the recursive function is made with the head node pointing to 3.
The function checks if the current node is nullptr. Since it's not, it makes a recursive call with the next node (7).
The function continues making recursive calls until it reaches the end of the list (nullptr).
At this point, it returns 0.
As the recursion unwinds, each recursive call adds 1 to the result obtained from the previous recursive call.
Eventually, the original caller receives the total count, which is the length of the linked list.
This process effectively counts the number of nodes in the linked list using recursion.*/
#include <iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Recursive function to find the length of a linked list
int findLengthRecursive(Node* head) {
    // Base case: If head is null, return 0
    if (head == nullptr) {
        return 0;
    }
    // Recursive call: Call the function with the next node
    // and increment the result by 1 to count the current node
    return 1 + findLengthRecursive(head->next);
}

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node(); // Create a new node
    newNode->data = newData;    // Assign data to the new node
    newNode->next = head;       // Point the new node to the current head
    head = newNode;             // Make the new node the new head
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Initialize an empty linked list
    Node* head = nullptr;

    // Insert some elements at the beginning of the linked list
    insertAtBeginning(head, 5);
    insertAtBeginning(head, 7);
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 3);

    // Display the linked list
    cout << "Linked List: ";
    displayList(head);

    // Find the length of the linked list recursively
    int length = findLengthRecursive(head);
    cout << "Length of the linked list (recursive): " << length << endl;

    return 0;
}
/*Explanation:
The findLengthRecursive function takes the head of the linked list as input and returns the length of the list.
In the function, we define a base case where if the head is nullptr, it returns 0, as there are no more nodes to count.
Otherwise, the function makes a recursive call to itself with the next node (head->next) and adds 1 to the result. This effectively traverses the list recursively.
As the recursion unwinds, the function returns the accumulated count of nodes.
In the main function, we create a linked list, insert some elements, display the list, and then call the findLengthRecursive function to determine its length. */