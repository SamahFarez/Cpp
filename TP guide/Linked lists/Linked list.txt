/* Unlike arrays, linked list elements are not stored at a contiguous location (the elements are linked using pointers).

# Advantages of Linked Lists over arrays: (1) Dynamic size and (2) Ease of insertion/deletion

# Disadvantages of Linked Lists:
                (1) Random access is not allowed. We have to access elements sequentially starting from the first node (head node)
				(2) Extra memory space for a pointer is required with each element of the list
				(3) Not cache friendly (the elements are not stored at a contiguous memory locations)

# Representation: A linked list is represented by a pointer to the first node of the linked list. The first node is called the head.
                  If the linked list is empty, then the value of the head points to NULL.

                  Each node in a list consists of at least two parts:
                  (1) data (we can store integer, strings or any type of data)
                  (2) Pointer to the next node

The head is sufficient to represent the whole list. We can traverse the complete list by following the next pointers.

--------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

// -----------------------------------------------------------------------------------------------------------------------------------------------

// Structure of a Node in a linked list
class Node {
public:
	int data;
	Node* next;
};

// -----------------------------------------------------------------------------------------------------------------------------------------------

// This function prints the content of a linked list starting from the given node
void printList(Node* n)
{
    cout << "\nThe content of the list is: " << endl;
    // print the data while the node is not NULL
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

// -----------------------------------------------------------------------------------------------------------------------------------------------

// This function inserts a new node in the beginning of the Linked List
void insertFront(Node** head, int data){

    // create a new node
    Node* new_node = new Node();

    // assign data
    new_node->data = data;

    // change the next node of this new node to current head of Linked List
    new_node->next = *head;

    // new_node should become the new head of Linked List
    *head = new_node;
}

// -----------------------------------------------------------------------------------------------------------------------------------------------

// This function searches whether the value x is present in the linked list
bool search(Node* head, int x)
{
    Node* current = head;
    while (current != NULL)
    {
        if (current->data == x)
            return true;
        else
        current = current->next;
    }
    return false;
}

// -----------------------------------------------------------------------------------------------------------------------------------------------

// This function deletes the first element from a linked list
void removeFirstNode(Node*& head)
{
    if (head != NULL){

        // Move the head pointer to the next node
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// -----------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	// assign data in first node
	head->data = 1;

	// Link first node with second
	head->next = second;

	// assign data to second node
	second->data = 2;

	// Link second node with the third node
	second->next = third;

	// assign data to third node
	third->data = 3;

	// next pointer of the third block is made NULL to indicate that the linked list ends here
	third->next = NULL;

	// -----------------------------------------------------------------------------------------------------------------------------------------------

    // Print the linked list elements
	printList(head);

	// -----------------------------------------------------------------------------------------------------------------------------------------------

	// Insert new node in the beginning of the Linked List
	insertFront(&head, 4);
    printList(head);

    // -----------------------------------------------------------------------------------------------------------------------------------------------

    // Searches whether the value x is present in the linked list
    int x = 1;
    bool exist = search(head, x);

    if(exist == true)
    cout << "\nThe value " << x << " is present in the linked list" << endl;

    else
    cout << "\nThe value " << x << " is not present in the linked list" << endl;

    // -----------------------------------------------------------------------------------------------------------------------------------------------

    // Delete the first element from the linked list
    removeFirstNode(head);
    printList(head);

	return 0;
}
