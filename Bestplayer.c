#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Bestplayer.h"

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
  printf("SEASON POINT Leader %s %s(%d)\n",temp->total_name,temp->team,temp->PTS);
  p = head;
  temp = NULL;
  while(p!=NULL){
    if(p->BLK < p->next->BLK){
      temp = p->next;
    }
    p = p->next;
  }
  printf("SEASON BLOCK Leader %s %s(%d)\n",temp->total_name,temp->team,temp->BLK);
}
