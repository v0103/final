#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Delete.h"
#include "Search.h"

struct item *Delete(struct item *head, char *Name) {
    /*
    example:
    list=Delete(list,"target_name");
    */
    struct item *origin;
    char Team[32];
    origin = head;       // record the original place
    if (head == NULL) {  // check if the list is empty
        printf("the list is empty.\n");
        return origin;
    }
    Search(&head, "NAME", Name);      //Firstly print the same names in whole teams
    printf("which team :");
    scanf("%s", Team);                     //Then enter  the target team
    if (strcmp(Name, origin->total_name)== 0 && strcmp(Team, origin->team)== 0) {   //delete the first one
	struct item *temp;
        temp = head->next;
        free(head);
        head = head->next;
        return head;
    }
    for (head=origin; head != NULL; head = head->next) {          //if the item is already in the database.
        if (strcmp(Name, head->next->total_name)== 0 && strcmp(Team, head->next->team)== 0) {  //stop at the previous one & target is next one.
            struct item *temp;
	    if (head->next->next!=NULL){   //delete the middle one
		temp=head->next->next;
		free(head->next);
		head->next=temp;
	    }else{                        //delete the last one
		free(head->next);
		head->next=NULL;
	    }
	    return origin;
        }
    }
    printf("there is no matching item to be deleted in the database.\n");
    return origin;
}
