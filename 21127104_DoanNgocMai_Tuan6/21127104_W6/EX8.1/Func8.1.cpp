#include"Funct8.1.h"

ListNode* createNode(int value) {
    ListNode* node = new ListNode;
    node->value = value;
    node->next = NULL;
    return node;
}

//Write code that store some values into the list. 

void append(ListNode*& head, int value) {
    if (head == nullptr)
        head = createNode(value);
    else
        append(head->next, value);
}
void insert(ListNode*& head, int value) 
{
    ListNode* newNode;
    newNode = createNode(value);
    if (head==nullptr)
        head = newNode;
    else {
        ListNode* nodePtr = head;
        ListNode* previousNode = nullptr;
        while (nodePtr != nullptr && nodePtr->value <= value)
        {
            previousNode = nodePtr;
            nodePtr=nodePtr->next;
        }
    } 
}

//Write code that traverses the list displaying the contents of each node's value member. 

void traverse(ListNode* head)
{
    ListNode* traversingNode = head;
    int i = 1; // used to show the index.
    while (traversingNode) {
        // Display the element
        cout << "Item number [" << i++ << "] : " << traversingNode->value << "\n";
        // Point to the next node
        traversingNode = traversingNode->next;
    }
}

//Write code that destroys the linked list. 

void destroy(ListNode* head)
{
    ListNode* current = head;

    while (current != NULL)
    {
        if (current == NULL)
            break;
        else
        {
            ListNode* temp = current;
            current = current->next;
            delete temp;
        }
    }

}
