#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Add.h"

void Add(struct item *head, struct item *new_member)
{
    /*
    example:
    Add(list,new_member);
    */

    struct item *origin;
    origin = head;       // record the original place
    if (head == NULL) {  // check if the list is empty
        printf("the list is empty.\n");
        return;
    }
    for (head=origin; head != NULL; head = head->next && strcmp(new_member->team, head->team)== 0) {          //if the item is already in the database.
        if (strcmp(new_member->total_name, head->total_name)== 0) {
            head = origin;
            printf("the item is already in the database.\n");
            return;
        }
    }
    for (head=origin; head != NULL; head = head->next) {
        if (head->next == NULL) {             // add to the last
            head->next = new_member;
            head = origin;
            return;
        }
    }
}
