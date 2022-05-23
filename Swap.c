#include <stdio.h>
#include <stdlib.h>
#include "basic.h"

void Swap(struct item *previous,struct item *a,struct item *b)
{
    if(previous == NULL) {  //which we want to swap include head node
        a->next = b->next;
        b->next = a;
    }
    else {
        previous->next = b;
        a->next = b->next;
        b->next = a;
    }
}
