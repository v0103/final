#include <stdio.h>
#include <stdlib.h>
#include "basic.h"

void Compare(struct item *head,char player1,char player2)
{
	struct item *p,*q;
	int val = 0;
	p = head;
	q = head;
	while (strcmp(p->total_name,player1) != 0 && p != NULL) {
		p = p->next;
		if (p == NULL) {
			printf("We can't find %s in this list.\n",player1);
			val = 1;
		}
	}
	while (strcmp(q->total_name,player2) != 0 && q != NULL) {
		q = q->next;
		if (q == NULL) {
			printf("We can't find %s in this list.\n",player2);
			val = 1;
		}
	}
	if (val != 1) {
		printf("%s\tvs\t%s\n",player1,player2);
		if (p->PTS > q->PTS) {
			printf("%d(win)\t%d(loss)\n",p->PTS,q->PTS);
		}
		else if (p->PTS < q->PTS) {
			printf("%d(loss)\t%d(win)\n",p->PTS,q->PTS);
		}
		else {
			printf("%d\ttie\t%d\n\n",p->PTS,q->PTS);
		}
	}

}
