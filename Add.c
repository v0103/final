#include <stdio.h>
#include <stdlib.h>
#include "basic.h"

void Add(struct item *head, struct item *new)
{
    struct item *origin;
    origin = head;       // record the original place
    if (head == NULL)    // check if the list is empty
    {
        printf("the list is empty\n");
        return;
    }
    for (head=origin; head != NULL; head = head->next)            //if the item is already in the database.
    {
        if (strcmp(new->total_name, head->total_name)== 0)
        {
            head = origin;
            printf("the item is already in the database.\n");
            return;
        }
    }
    for (head=origin; head != NULL; head = head->next)
    {
        if (head->next == NULL)               // add to the last
        {
            head->next = new;
            head = origin;
            return;
        }
    }
}
