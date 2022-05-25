#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
#include "basic.h"

void Add(struct item *head, struct item *new_member)
{
    /*
    example:
    Add(list,new_member);
    */

    struct item *origin;
    origin = head;       // record the original place
    if (head == NULL) {  // check if the list is empty
        printf("the list is empty.\n");
        return;
    }
    for (head=origin; head != NULL; head = head->next) {          //if the item is already in the database.
        if (strcmp(new_member->total_name, head->total_name)== 0) {
            head = origin;
            printf("the item is already in the database.\n");
            return;
        }
    }
    for (head=origin; head != NULL; head = head->next) {
        if (head->next == NULL) {             // add to the last
            head->next = new_member;
            head = origin;
            return;
        }
    }
}

void Delete(struct item *head, struct item *new)
{
    struct item *origin;
    origin = head;       // record the original place
    if (head == NULL) {  // check if the list is empty
        printf("the list is empty\n");
        return;
    }
    for (head=origin; head != NULL; head = head->next) {          //if the item is already in the database.
        if (strcmp(new->total_name, head->total_name)== 0) {
           struct item *temp;
	   if(head->next->next!=NULL){   //delete the middle one
		temp=head->next->next;
		free(head->next);
		head->next=temp;
	   }else{                        //delete the last one
		free(head->next);
		head->next=NULL;
	   }
	   head=origin;
	   return;
        }
    }
    printf("there is no matching item to be deleted in the database.\n");
}

void Traverse(struct item **HEAD)
{
    struct item *temp = *HEAD;

    if (temp == NULL) {
        printf("the list is null\n");
        return;
    }

    printf("NAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n");
    while (temp != NULL) {
        printf("%-10s\t%3s\t%c\t%d\t%d\t%d\t%d\t%d\t%.2f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);

        temp = temp->next;
    }
}

void Search(struct item **HEAD, char *type, char *goal)
{

    /*
    example:
    search_list(&list, "NAME", "S.Curry");
    search_list(&list, "TEAM", "LAL");
    search_list(&list, "POS", "C");
    */

    int search = 0;
    struct item *temp = *HEAD;

    if (!strcmp(type, "NAME")) {

        while (temp != NULL) {

            if (!strcmp(temp->total_name, goal)) {
                search = 1;

                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%-10s\t%3s\t%c\t%d\t%d\t%d\t%d\t%d\t%.2f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);

            }

            temp = temp->next;
        }

    } else if (!strcmp(type, "TEAM")) {

        while (temp != NULL) {

            if (!strcmp(temp->team, goal)) {
                search = 1;

                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%-10s\t%3s\t%c\t%d\t%d\t%d\t%d\t%d\t%.2f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);

            }

            temp = temp->next;
        }

    } else if (!strcmp(type, "POS")) {

        while (temp != NULL) {

            if (temp->POS == goal[0]) {
                search = 1;

                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%-10s\t%3s\t%c\t%d\t%d\t%d\t%d\t%d\t%.2f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);

            }

            temp = temp->next;
        }

    }

    if (!search) {
        printf("Not Found\n");
    }

}

void Sort_ascending(struct item *head,char data)
{
    int swapped=0;
    struct item *pre=NULL;
    struct item *now;
    struct item *now_next;
    struct item *lastptr = NULL;
    struct item *temp;
    if (head == NULL) {  //check if the list is empty
        return 0;
    }
    do {
        swapped = 0;
        pre = NULL;
        now = head;
        now_next = now->next;
        while (now_next != lastptr) {  //check if the swapped until last node
        	switch(data){
			case PTS:
				if (now->PTS > now_next->PTS) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                   			if(pre==NULL) {  //change head point to new one
                        			head = p;
                   			}
                		}
				else if (now->PTS == now_next->PTS) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case REB:
				if (now->REB > now_next->REB) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->REB == now_next->REB) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case AST:
				if (now->AST > now_next->AST) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->AST == now_next->AST) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case STL:
				if (now->STL > now_next->STL) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->STL == now_next->STL) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case BLK:
				if (now->BLK > now_next->BLK) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->BLK == now_next->BLK) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case FG:
				if (now->FG > now_next->FG) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->FG == now_next->FG) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
		}
		pre = now;  //move to next node
            	now = now_next;
            	now_next = now_next->next;
	}
        lastptr = now_next; //update the last node
     }
     while (swapped);  //check if swap happened
}

void Sort_descending(struct item *head,char data)
{
    int swapped=0;
    struct item *pre=NULL;
    struct item *now;
    struct item *now_next;
    struct item *lastptr = NULL;
    struct item *temp;
    if (head == NULL) {  //check if the list is empty
        return 0;
    }
    do {
        swapped = 0;
        pre = NULL;
        now = head;
        now_next = now->next;
        while (now_next != lastptr) {  //check if the swapped until last node
        	switch(data){
			case PTS:
				if (now->PTS < now_next->PTS) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                   			if(pre==NULL) {  //change head point to new one
                        			head = p;
                   			}
                		}
				else if (now->PTS == now_next->PTS) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case REB:
				if (now->REB < now_next->REB) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->REB == now_next->REB) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case AST:
				if (now->AST < now_next->AST) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->AST == now_next->AST) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case STL:
				if (now->STL < now_next->STL) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->STL == now_next->STL) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case BLK:
				if (now->BLK < now_next->BLK) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->BLK == now_next->BLK) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
			case FG:
				if (now->FG < now_next->FG) {
                    			Swap(pre, now, now_next);
                    			swapped = 1; //swap happened
                    			temp = now; //change swapped node pointer
                    			now = now_next;
                    			now_next = temp;
                    			if(pre==NULL) {  //change head point to new one
                        			head = p;
                    			}
                		}
				else if (now->FG == now_next->FG) {
					if (strcmp(now->total_name,now_next->total_name) > 0) {
						Swap(pre, now, now_next);
                    				swapped = 1; //swap happened
                    				temp = now; //change swapped node pointer
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  //change head point to new one
                        				head = p;
                   				}
					}
				}
				break;
		}
		pre = now;  //move to next node
            	now = now_next;
            	now_next = now_next->next;
	}
        lastptr = now_next; //update the last node
     }
     while (swapped);  //check if swap happened
}

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

int cmp1(const void *a,const void *b)
{
	if (a->PTS > b->PTS) {
		return 1;
	}
	else if (a->PTS < b->PTS) {
		return -1;
	}
	else {
		return 0;
	}
}


