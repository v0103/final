#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Stats_leader.h"
#include "Sort.h"

void print_PTS(struct item **);
void print_REB(struct item **);
void print_AST(struct item **);
void print_STL(struct item **);
void print_BLK(struct item **);
void print_FG(struct item **);
void best_player(struct item **);

void Stats_leader(struct item **HEAD) {
    print_PTS(HEAD);
    print_REB(HEAD);
    print_AST(HEAD);
    print_STL(HEAD);
    print_BLK(HEAD);
    print_FG(HEAD);
    best_player(HEAD);
}

void print_PTS(struct item **HEAD) {

    printf("\nPTS leader\nNAME                 \t\tPTS\n");
    Sort_descending(HEAD, "PTS");

    struct item *temp = *HEAD;
    for (int i = 0; i < 5; i++) {

        printf("%-25s\t%d\n", temp->total_name, temp->PTS);

        temp = temp->next;
    }
}

void print_REB(struct item **HEAD) {

    printf("\nREB leader\nNAME                 \t\tREB\n");
    Sort_descending(HEAD, "REB");

    struct item *temp = *HEAD;
    for (int i = 0; i < 5; i++) {

        printf("%-25s\t%d\n", temp->total_name, temp->REB);

        temp = temp->next;
    }
}

void print_AST(struct item **HEAD) {

    printf("\nAST leader\nNAME                 \t\tAST\n");
    Sort_descending(HEAD, "AST");

    struct item *temp = *HEAD;
    for (int i = 0; i < 5; i++) {

        printf("%-25s\t%d\n", temp->total_name, temp->AST);

        temp = temp->next;
    }
}

void print_STL(struct item **HEAD) {

    printf("\nSTL leader\nNAME                 \t\tSTL\n");
    Sort_descending(HEAD, "STL");

    struct item *temp = *HEAD;
    for (int i = 0; i < 5; i++) {

        printf("%-25s\t%d\n", temp->total_name, temp->STL);

        temp = temp->next;
    }
}

void print_BLK(struct item **HEAD) {

    printf("\nBLK leader\nNAME                 \t\tBLK\n");
    Sort_descending(HEAD, "BLK");

    struct item *temp = *HEAD;
    for (int i = 0; i < 5; i++) {

        printf("%-25s\t%d\n", temp->total_name, temp->BLK);

        temp = temp->next;
    }
}

void print_FG(struct item **HEAD) {

    printf("\nFG%% leader\nNAME                 \t\tFG%%\n");
    Sort_descending(HEAD, "FG%%");

    struct item *temp = *HEAD;
    for (int i = 0; i < 5; i++) {

        printf("%-25s\t%.2f\n", temp->total_name, temp->FG);

        temp = temp->next;
    }
}

void best_player(struct item **head)
{
  
  struct item *p=*head;
  int max;
  int val = 0;
  
  max = p->PTS;
  while(p!=NULL){
    	if(max < p->PTS){
      		max = p->PTS;
    	}
    	p = p->next;
  }
  p = *head;
  while(p!=NULL && val != 1){
  	if(p->PTS != max){
  		p = p->next;
  	}
  	else{
  		val = 1;
  	}
  }
  printf("SEASON POINT Leader: %s (%s) %d\n",p->total_name,p->team,p->PTS);
  
  p = *head;
  val = 0;
  max = p->BLK;
  while(p!=NULL){
    	if(max < p->BLK){
      		max = p->BLK;
    	}
    	p = p->next;
  }
  p = *head;
  while(p!=NULL && val != 1){
  	if(p->BLK != max){
  		p = p->next;
  	}
  	else{
  		val = 1;
  	}
  }
  printf("SEASON BLOCK Leader: %s (%s) %d\n",p->total_name,p->team,p->BLK);
  
  p = *head;
  val = 0;
  max = p->AST;
  while(p!=NULL){
    	if(max < p->AST){
      		max = p->AST;
    	}
    	p = p->next;
  }
  p = *head;
  while(p!=NULL && val != 1){
  	if(p->AST != max){
  		p = p->next;
  	}
  	else{
  		val = 1;
  	}
  }
  printf("SEASON ASSIST Leader: %s (%s) %d\n",p->total_name,p->team,p->AST);
  
  p = *head;
  val = 0;
  max = p->STL;
  while(p!=NULL){
    	if(max < p->STL){
      		max = p->STL;
    	}
    	p = p->next;
  }
  p = *head;
  while(p!=NULL && val != 1){
  	if(p->STL != max){
  		p = p->next;
  	}
  	else{
  		val = 1;
  	}
  }
  printf("SEASON STEAL Leader: %s (%s) %d\n",p->total_name,p->team,p->STL);
  
  p = *head;
  val = 0;
  max = p->REB;
  while(p!=NULL){
    	if(max < p->REB){
      		max = p->REB;
    	}
    	p = p->next;
  }
  p = *head;
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
