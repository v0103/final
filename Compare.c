#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Compare.h"
#include "Search.h"

void Compare(struct item *head,char player1[10],char player2[10])
{
	struct item *p,*q;
	int val = 0;
	p = head;
	q = head;
	char Team1[10];
	char Team2[10];

	Search(&head,"Name",player1);
	//Traverse(&head);
	printf("Which team data do you want to know for %s?:",player1);
	scanf("%s",Team1);

	Search(&head,"Name",player2);
	//Traverse(&head);
	printf("Which team data do you want to know for %s?:",player2);
	scanf("%s",Team2);

	while (strcmp(p->total_name,player1) != 0 && strcmp(p->team,Team1) != 0 && p != NULL) {
		p = p->next;
	}
	while (strcmp(q->total_name,player2) != 0 && strcmp(q->team,Team2) != 0 && q != NULL) {
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
