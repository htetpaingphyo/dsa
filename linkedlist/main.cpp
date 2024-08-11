#include <iostream>
#include "main.h"

node *create_node()
{
    node *n = (node *)malloc(sizeof(node));
    n->data = 0;
    n->next = NULL;
    return n;
}

node *add_node(node *head, int data)
{
    if (head == NULL)
        return NULL;

    node *n_node = (node *)malloc(sizeof(node));
    n_node->data = data;
    n_node->next = head;

    return n_node;
}

int main()
{
    // declaration
    int i = 0, num, data;

    // initialization
    node *head = create_node();

    std::cout << "enter number of nodes: ";
    std::cin >> num;

    while (i < num)
    {
        std::cout << "enter node data: ";
        std::cin >> data;

        if (head != NULL)
        {
            head = add_node(head, data);
        }

        std::cout << "node data: " << head->data << std::endl;
        std::cout << "node address: " << head->next << std::endl;
        free(head);

        i++;
    }

    return 0;
}
