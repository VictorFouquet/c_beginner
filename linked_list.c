#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void print_list(struct Node *head)
{
    struct Node *tmp = head;
    while (tmp != NULL)
    {
        printf("Node data : %d\n", tmp->data);
        tmp = tmp->next;
    }
}

int main()
{
    struct Node n1, n2, n3;
    struct Node *head;

    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    print_list(head);
    return 0;
}