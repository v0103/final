#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Bestplayer.h"

void best_player(struct item *head)
{
  
  struct item *p=head;
  int max;
  int val = 0;
  
  max = p->PTS;
  while(p!=NULL){
    	if(max < p->PTS){
      		max = p->PTS;
    	}
    	p = p->next;
  }
  p = head;
  while(p!=NULL && val != 1){
  	if(p->PTS != max){
  		p = p->next;
  	}
  	else{
  		val = 1;
  	}
  }
  printf("SEASON POINT Leader: %s (%s) %d\n",p->total_name,p->team,p->PTS);
  
  p = head;
  val = 0;
  max = p->BLK;
  while(p!=NULL){
    	if(max < p->BLK){
      		max = p->BLK;
    	}
    	p = p->next;
  }
  p = head;
  while(p!=NULL && val != 1){
  	if(p->BLK != max){
  		p = p->next;
  	}
  	else{
  		val = 1;
  	}
  }
  printf("SEASON BLOCK Leader: %s (%s) %d\n",p->total_name,p->team,p->BLK);
  
  p = head;
  val = 0;
  max = p->AST;
  while(p!=NULL){
    	if(max < p->AST){
      		max = p->AST;
    	}
    	p = p->next;
  }
  p = head;
  while(p!=NULL && val != 1){
  	if(p->AST != max){
  		p = p->next;
  	}
  	else{
  		val = 1;
  	}
  }
  printf("SEASON ASSIST Leader: %s (%s) %d\n",p->total_name,p->team,p->AST);
  
  p = head;
  val = 0;
  max = p->STL;
  while(p!=NULL){
    	if(max < p->STL){
      		max = p->STL;
    	}
    	p = p->next;
  }
  p = head;
  while(p!=NULL && val != 1){
  	if(p->STL != max){
  		p = p->next;
  	}
  	else{
  		val = 1;
  	}
  }
  printf("SEASON STEAL Leader: %s (%s) %d\n",p->total_name,p->team,p->STL);
  
  p = head;
  val = 0;
  max = p->REB;
  while(p!=NULL){
    	if(max < p->REB){
      		max = p->REB;
    	}
    	p = p->next;
  }
  p = head;
  while(p!=NULL && val != 1){
  	if(p->REB != max){
  		p = p->next;
  	}
  	else{
  		val = 1;
  	}
  }
  printf("SEASON REBOUND Leader: %s (%s) %d\n",p->total_name,p->team,p->REB);
  
  
  
}
