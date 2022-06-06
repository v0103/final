#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "best_player.h"

void best_player(struct item *head)
{
  struct item  *p= head;
  struct item *temp = NULL;
  while(p!=NULL){
    if(p->PTS < p->next->PTS){
      temp = p->next;
    }
    p = p->next;
  }
  printf("SEASON POINT Leader %s %s\n",temp->total_name,temp->team);
}
