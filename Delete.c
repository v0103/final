#include <stdio.h>
#include <stdlib.h>
#include "basic.h"

void Delete(struct item *head, struct item *target)
{
    /*
    example:
    Delete(list,target);
    */
    struct item *origin;
    origin = head;       // record the original place
    if (head == NULL) {  // check if the list is empty
        printf("the list is empty.\n");
        return;
    }
    for (head=origin; head != NULL; head = head->next) {          //if the item is already in the database.
        if (strcmp(target->total_name, head->total_name)== 0) {
           struct item *temp;
	   if(head->next->next!=NULL){   //delete the middle one
		temp=head->next->next;
		free(head->next);
		head->next=temp;
	   }else{                        //delete the last one
		free(head->next);
		head->next=NULL;
	   }
	   head=origin;
	   return;
        }
    }
    printf("there is no matching item to be deleted in the database.\n");
}
