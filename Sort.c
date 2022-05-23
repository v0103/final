#include <stdio.h>
#include <stdlib.h>
#include "basic.h"

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
