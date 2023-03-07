#include <stdio.h>
#include <stdlib.h>

struct node
{
    int id;
    int value;
    struct node *next;
};

/* Complete the code for creating a new node
   return the pointer to newly created node
*/

struct node *create_node(int id, int val)
{
    struct node *temp;
    // printf("A");
    temp = calloc(1, sizeof(struct node));
    // printf("B");
    temp->id = id;
    temp->value = val;
    // printf("%d", temp -> value);
    return temp;
}

/* Complete the code for adding node e to the front of the list
   Return a pointer to the starting of the new list
*/

struct node *append(struct node *list, struct node *e)
{
    e->next = list;
    list = e;
    return list;
}

/* Complete the code for searching the node with id in the list
   Return a pointer to the node if found.
   Return NULL otherwise
*/

struct node *search(struct node *list, int id)
{
    struct node *curr = list;
    while (curr != NULL && curr->id != id)
    {
        curr = curr->next;
    }
    return curr;
}

/* Complete the code for changing the value of node e with given id to val
   Do nothing if such a node is not found.
*/
void change_value(struct node *list, int id, int val)
{
    struct node *curr = list;
    while (curr != NULL && curr->id != id)
    {
        curr = curr->next;
    }
    if (curr->id == id)
    {
        curr->value = val;
    }
}

int find_value(struct node *list, int id)
{
    struct node *e = search(list, id);
    if (e != NULL)
        return e->value;
    return -1;
}

int main()
{
    char op;
    int id, val;
    struct node *list = NULL;

    int flag = 1;
    do
    {
        scanf("%c ", &op);
        switch (op)
        {
        case 'A':
            scanf("%d %d", &id, &val);
            list = append(list, create_node(id, val));
            break;
        case 'S':
            scanf("%d", &id);
            printf("%d %d\n", id, find_value(list, id));
            break;
        case 'C':
            scanf("%d %d", &id, &val);
            change_value(list, id, val);
            break;
        case 'E':
            flag = 0;
        }
    } while (flag == 1);
    return 0;
}