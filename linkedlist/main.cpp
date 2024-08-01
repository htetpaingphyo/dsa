#include <iostream>
#include "main.h"

node *head = NULL;

node *add_node(int data)
{
    node *new_node;

    if (head == NULL)
    {
        new_node = (node *)malloc(sizeof(node));

        if (new_node == NULL)
            return NULL;

        new_node->data = data;
        new_node->next = NULL;
        head = new_node;
    }
    else
    {
        new_node = (node *)malloc(sizeof(node));

        if (new_node == NULL)
            return NULL;

        new_node->data = data;
        new_node->next = head;
    }

    return new_node;
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        node *i_node = add_node(i);
        std::cout << "node data: " << i_node->data << std::endl;
        std::cout << "next node: " << i_node->next << std::endl;
        std::cout << std::endl;

        free(i_node);
    }

    return 0;
}