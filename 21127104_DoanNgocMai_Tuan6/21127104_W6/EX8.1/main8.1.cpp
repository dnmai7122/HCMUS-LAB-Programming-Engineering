#include"Funct8.1.h"
int main()
{
    ListNode* head;
    head = NULL;
    int x;

    while (true)
    {
        cout << "\n1. Store some values into the list.\n"
            << "2. Traverse the list displaying the contents of each node's value member. \n"
            << "3. Destroy the linked list. \n"
            << "0. Quit program. \n" << endl;
        cin >> x; //

        if (x == 0)
            break;
        else if (x == 1)
        {
            int n;
            do {
                cout << "Enter n of nodes: " << endl; cin >> n;
            } while (n < 0);
            for (int i = 0; i <= n; i++)
            {
                int data;
                cout << "Enter value of node: " << endl; cin >> data;
                append(head, data);
            }
        }
        else if (x == 2)
        {
            traverse(head);

        }
        else if (x == 3)
            destroy(head);
        else cout << "we do not do that here";
    
    }


    return 0;
}