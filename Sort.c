#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Sort.h"
#define judgebig(a,b,c) (if(a->c > b->c){ \
				Swap(pre,a,b); \
				swapped = 1;   \
				temp = a;      \
                    		a = b;         \
                    		b = temp;      \
                   		if(pre==NULL) {    \
                        		head = p; \
                   		}                 \
			}                         \
			else if (a->c == a->b) { \
					if (strcmp(a->total_name,b->total_name) > 0) { \
						Swap(pre, a, b); \
                    				swapped = 1;  \
                    				temp = a;  \
                    				a = b;\
                    				b = temp;\
                   				if(pre==NULL) {  \
                        				head = p;\
                   				} \
					}\
			})
#define judgesmall(a,b,c) (if(a->c < b->c){ \
				Swap(pre,a,b); \
				swapped = 1;   \
				temp = a;      \
                    		a = b;         \
                    		b = temp;      \
                   		if(pre==NULL) {    \
                        		head = p; \
                   		}                 \
			}                         \
			else if (a->c == a->b) { \
					if (strcmp(a->total_name,b->total_name) > 0) { \
						Swap(pre, a, b); \
                    				swapped = 1;  \
                    				temp = a;  \
                    				a = b;\
                    				b = temp;\
                   				if(pre==NULL) {  \
                        				head = p;\
                   				} \
					}\
			})
void Sort_ascending(struct item *head,char data[10])
{
    int swapped=0;
    struct item *pre = NULL;
    struct item *now;
    struct item *now_next;
    struct item *lastptr = NULL;
    struct item *temp;
    if (head == NULL) {  //check if the list is empty
        return;
    }
    do {
        swapped = 0;
        pre = NULL;
        now = head;
        now_next = now->next;
        while (now_next != lastptr) {  //check if the swapped until last node
        	switch(data){//好像不能用switch case
			case PTS:
				judgebig(now,now_next,PTS);
				break;
			case REB:
				judgebig(now,now_next,REB);
				break;
			case AST:
				judgebig(now,now_next,AST);
				break;
			case STL:
				judgebig(now,now_next,STL);
				break;
			case BLK:
				judgebig(now,now_next,BLK);
				break;
			case FG:
				judgebig(now,now_next,FG);
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

void Sort_descending(struct item *head,char data[10])
{
    int swapped=0;
    struct item *pre=NULL;
    struct item *now;
    struct item *now_next;
    struct item *lastptr = NULL;
    struct item *temp;
    if (head == NULL) {  //check if the list is empty
        return;
    }
    do {
        swapped = 0;
        pre = NULL;
        now = head;
        now_next = now->next;
        while (now_next != lastptr) {  //check if the swapped until last node
        	switch(data){
			case PTS:
				judgesmall(now,now_next,PTS);
				break;
			case REB:
				judgesmall(now,now_next,REB);
				break;
			case AST:
				judgesmall(now,now_next,AST);
				break;
			case STL:
				judgesmall(now,now_next,STL);
				break;
			case BLK:
				judgesmall(now,now_next,BLK);
				break;
			case FG:
				judgesmall(now,now_next,FG);
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
