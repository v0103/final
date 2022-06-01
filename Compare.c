#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Compare.h"

void Compare(struct item *head,char player1[10],char player2[10])
{
	struct item *p,*q;
	int val = 0;
	p = head;
	q = head;
	char team[10];
	while(p!=NULL){
		if(strcmp(p->total_name,player1) == 0){
			printf("%s\n",p->);
		}
		else if (p == NULL) {
			printf("We can't find %s in this list.\n",player1);
			val = 1;
		}
		p=p->next;
	}
	while(q!=NULL){
		if(strcmp(q->total_name,player2) == 0){
			printf("%s\n",q->);
		}
		else if (q == NULL) {
			printf("We can't find %s in this list.\n",player2);
			val = 1;
		}
		q=q->next;
	}
	printf("Which team data do you want to know? ");
	scanf("%s",team);
	while (strcmp(p->total_name,player1) != 0 && p != NULL) {
		p = p->next;
		
		
	}
	while (strcmp(q->total_name,player2) != 0 && q != NULL) {
		q = q->next;
		
	}
	if (val != 1) {
		printf("%s\tvs\t%s\n",player1,player2);
		if (p->PTS > q->PTS) {
			printf("%d(win)\t%d(loss)\n",p->PTS,q->PTS);
		}
		else if (p->PTS < q->PTS) {
			printf("%d(loss)\t%d(win)\n",p->PTS,q->PTS);
		}
		else if (p->PTS == q->PTS) {
			printf("%d\ttie\t%d\n",p->PTS,q->PTS);
		}
		else if (p->AST > q->AST) {
			printf("%d(win)\t%d(loss)\n",p->AST,q->AST);
		}
		else if (p->AST < q->AST) {
			printf("%d(loss)\t%d(win)\n",p->AST,q->AST);
		}
		else if (p->AST == q->AST) {
			printf("%d\ttie\t%d\n",p->AST,q->AST);
		}
		else if (p->REB > q->REB) {
			printf("%d(win)\t%d(loss)\n",p->REB,q->REB);
		}
		else if (p->REB < q->REB) {
			printf("%d(loss)\t%d(win)\n",p->REB,q->REB);
		}
		else if (p->REB == q->REB) {
			printf("%d\ttie\t%d\n",p->REB,q->REB);
		}
		else if (p->BLK > q->BLK) {
			printf("%d(win)\t%d(loss)\n",p->BLK,q->BLK);
		}
		else if (p->BLK < q->BLK) {
			printf("%d(loss)\t%d(win)\n",p->BLK,q->BLK);
		}
		else if (p->BLK == q->BLK) {
			printf("%d\ttie\t%d\n",p->BLK,q->BLK);
		}
		else if (p->STL > q->STL) {
			printf("%d(win)\t%d(loss)\n",p->STL,q->STL);
		}
		else if (p->STL < q->STL) {
			printf("%d(loss)\t%d(win)\n",p->STL,q->STL);
		}
		else if (p->STL == q->STL) {
			printf("%d\ttie\t%d\n",p->STL,q->STL);
		}
		else if (p->FG > q->FG) {
			printf("%f(win)\t%f(loss)\n",p->FG,q->FG);
		}
		else if (p->FG < q->FG) {
			printf("%f(loss)\t%f(win)\n",p->FG,q->FG);
		}
		else if (p->FG == q->FG) {
			printf("%f\ttie\t%f\n",p->FG,q->FG);
		}
	}

}
