#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Compare.h"
#include "Search.h"

void Compare(struct item *head, char *player1, char *player2)
{
	struct item *p,*q,*temp;
	int val = 0;
	int search1 = 0,search2 = 0;
	p = head;
	q = head;
	temp = head;
	char Team1[10];
	char Team2[10];
    	if (head == NULL) {  // check if the list is empty
        	printf("the list is empty.\n");
        	return;
    	}
    	//Search(&head, "NAME", player1);
    	while(temp != NULL){
    		if (!strcmp(temp->total_name, player1)) {
                search1 = 1;
                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%s\t%s\t%c\t%d\t%d\t%d\t%d\t%d\t%f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);
                printf("\n");
            }

            temp = temp->next;
    	}
 	if(search1 != 0){
		printf("Which team data do you want to know for %s? :",player1);
		scanf("%s",Team1);
	}	
	else{
		val = 1;
    		printf("Can not find %s in this list.\n",player1);
    		printf("Please input correct player name.\n");
	}
	temp = head;
	//Search(&head, "NAME", player2);
	while(temp != NULL){
    		if (!strcmp(temp->total_name, player2)) {
                search2 = 1;
                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%s\t%s\t%c\t%d\t%d\t%d\t%d\t%d\t%f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);
                printf("\n");
            }

            temp = temp->next;
    	}
    	if(search2 != 0){
		printf("Which team data do you want to know for %s? :",player2);
    		scanf("%s",Team2);
	}
	else{
		val = 1;
    		printf("Can not find %s in this list.\n",player2);
    		printf("Please input correct player name.\n");
	}
	
	if(val == 1){
		printf("\n");
		printf("Because input Name doesn't exist, so we can not compare!\n");
	}
	else{
		while (strcmp(p->total_name,player1) != 0 && strcmp(p->team,Team1) != 0 && p != NULL) {
			p = p->next;
		}
		while (strcmp(q->total_name,player2) != 0 && strcmp(q->team,Team2) != 0 && q != NULL) {
			q = q->next;
		}
		printf("\t%s\tvs\t%s\n",player1,player2);
		printf("PTS\t");
		if (p->PTS > q->PTS) {
			printf("%d(win)\t\t%d(loss)\n",p->PTS,q->PTS);
		}
		else if (p->PTS < q->PTS) {
			printf("%d(loss)\t\t%d(win)\n",p->PTS,q->PTS);
		}
		else if (p->PTS == q->PTS) {
			printf("%d\ttie\t\t%d\n",p->PTS,q->PTS);
		}
		printf("AST\t");
		if (p->AST > q->AST) {
			printf("%d(win)\t\t%d(loss)\n",p->AST,q->AST);
		}
		else if (p->AST < q->AST) {
			printf("%d(loss)\t\t%d(win)\n",p->AST,q->AST);
		}
		else if (p->AST == q->AST) {
			printf("%d\ttie\t\t%d\n",p->AST,q->AST);
		}
		printf("REB\t");
		if (p->REB > q->REB) {
			printf("%d(win)\t\t%d(loss)\n",p->REB,q->REB);
		}
		else if (p->REB < q->REB) {
			printf("%d(loss)\t\t%d(win)\n",p->REB,q->REB);
		}
		else if (p->REB == q->REB) {
			printf("%d\ttie\t\t%d\n",p->REB,q->REB);
		}
		printf("BLK\t");
		if (p->BLK > q->BLK) {
			printf("%d(win)\t\t%d(loss)\n",p->BLK,q->BLK);
		}
		else if (p->BLK < q->BLK) {
			printf("%d(loss)\t\t%d(win)\n",p->BLK,q->BLK);
		}
		else if (p->BLK == q->BLK) {
			printf("%d\ttie\t\t%d\n",p->BLK,q->BLK);
		}
		printf("STL\t");
		if (p->STL > q->STL) {
			printf("%d(win)\t\t%d(loss)\n",p->STL,q->STL);
		}
		else if (p->STL < q->STL) {
			printf("%d(loss)\t\t%d(win)\n",p->STL,q->STL);
		}
		else if (p->STL == q->STL) {
			printf("%d\ttie\t\t%d\n",p->STL,q->STL);
		}
		printf("FG\t");
		if (p->FG > q->FG) {
			printf("%f(win)\t\t%f(loss)\n",p->FG,q->FG);
		}
		else if (p->FG < q->FG) {
			printf("%f(loss)\t\t%f(win)\n",p->FG,q->FG);
		}
		else if (p->FG == q->FG) {
			printf("%f\ttie\t\t%f\n",p->FG,q->FG);
		}
	}

}
