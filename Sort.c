#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Sort.h"
/*
void Sort_ascending(struct item *head,char data[10])
{
    int swapped = 0;
   	int val = 0;
    struct item *pre = NULL;
    struct item *now;
    struct item *now_next;
    struct item *lastptr = NULL;
    struct item *temp;
	if(strcmp(data,"PTS")==0){
		val = 1;
	}
	else if(strcmp(data,"REB")==0){
		val = 2;
	}
	else if(strcmp(data,"AST")==0){
		val = 3;
	}
	else if(strcmp(data,"STL")==0){
		val = 4;
	}
	else if(strcmp(data,"BLK")==0){
		val = 5;
	}
	else if(strcmp(data,"FG")==0){
		val = 6;
	}
    if (head == NULL) {  //check if the list is empty
        return;
    }
    do {
        swapped = 0;
        pre = NULL;
        now = head;
        now_next = now->next;
        while (now_next != lastptr) {  //check if the swapped until last node
        	switch(val){
			case 1:
				if(now->PTS > now_next->PTS){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->PTS == now_next->PTS) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 2:
				if(now->REB > now_next->REB){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->REB == now_next->REB) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 3:
				if(now->AST > now_next->AST){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->AST == now_next->AST) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 4:
				if(now->STL > now_next->STL){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->STL == now_next->STL) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 5:
				if(now->BLK > now_next->BLK){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->BLK == now_next->BLK) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 6:
				if(now->FG > now_next->FG){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->FG == now_next->FG) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
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

void Sort_descending(struct item *head,char data[10])
{
    int swapped=0;
	int val = 0;
    struct item *pre=NULL;
    struct item *now;
    struct item *now_next;
    struct item *lastptr = NULL;
    struct item *temp;
	if(strcmp(data,"PTS")==0){
		val = 1;
	}
	else if(strcmp(data,"REB")==0){
		val = 2;
	}
	else if(strcmp(data,"AST")==0){
		val = 3;
	}
	else if(strcmp(data,"STL")==0){
		val = 4;
	}
	else if(strcmp(data,"BLK")==0){
		val = 5;
	}
	else if(strcmp(data,"FG")==0){
		val = 6;
	}
	
    if (head == NULL) {  //check if the list is empty
        return;
    }
    do {
        swapped = 0;
        pre = NULL;
        now = head;
        now_next = now->next;
        while (now_next != lastptr) {  //check if the swapped until last node
        	switch(val){
			case 1:
				if(now->PTS < now_next->PTS){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->PTS == now_next->PTS) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 2:
				if(now->REB < now_next->REB){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->REB == now_next->REB) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 3:
				if(now->AST < now_next->AST){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->AST == now_next->AST) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 4:
				if(now->STL < now_next->STL){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->STL == now_next->STL) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 5:
				if(now->BLK < now_next->BLK){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->BLK == now_next->BLK) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
                   				} 
					}
				}
				break;
			case 6:
				if(now->FG < now_next->FG){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = now; 
                   			}                 
				}                         
				else if (now->FG == now_next->FG) { 
					if (strcmp(now->total_name,now_next->total_name) > 0) { 
						Swap(pre,now,now_next); 
                    				swapped = 1;  
                    				temp = now;  
                    				now = now_next;
                    				now_next = temp;
                   				if(pre==NULL) {  
                        				head = now;
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
*/

void Sort_ascending(struct item **HEAD, char data[10]) {
    /*
    先取list的第一項開始往後比，遇到比自己小的就交換，直到list結束。
    再取第二項往後比，以此類推，取到list的前一項為止。
    (從n個裡找出最小值，再從n-1裡找最小值，......)
    */

    struct item *head = *HEAD, *cur = *HEAD, *cur_pre = NULL, *cmp = NULL, *cmp_pre = NULL;
	int num = 0;
    
	while (head != NULL) {
		num++;
		head = head->next;
	}
	
	for (int i = 0; i < num - 1; i++) {

        cmp = cur->next;
        cmp_pre = cur;

        while (cmp != NULL) {

            if (cmp->AST < cur->AST) {
                
                //swap
                struct item *temp;

                if (cur_pre != NULL) {
			        cur_pre->next = cmp;
		        } else {
			        *HEAD = cmp;
		        }

		        if (cmp_pre != NULL) {
			        cmp_pre->next = cur;
		        } else {
			        *HEAD = cur;
		        }

		        temp = cur->next;
		        cur->next = cmp->next;
		        cmp->next = temp;

                //指回原本位置
                temp = cur;
                cur = cmp;
                cmp = temp;

            }

            cmp_pre = cmp;
            cmp = cmp->next;
        }

        cur_pre = cur;
        cur = cur->next;
		
    }

}

void Sort_descending(struct item **HEAD, char data[10]) {
    /*
    先取list的第一項開始往後比，遇到比自己小的就交換，直到list結束。
    再取第二項往後比，以此類推，取到list的前一項為止。
    (從n個裡找出最小值，再從n-1裡找最小值，......)
    */

    struct item *head = *HEAD, *cur = *HEAD, *cur_pre = NULL, *cmp = NULL, *cmp_pre = NULL;
	int num = 0;
    
	while (head != NULL) {
		num++;
		head = head->next;
	}
	
	for (int i = 0; i < num - 1; i++) {

        cmp = cur->next;
        cmp_pre = cur;

        while (cmp != NULL) {

            if (cmp->AST > cur->AST) {
                
                //swap
                struct item *temp;

                if (cur_pre != NULL) {
			        cur_pre->next = cmp;
		        } else {
			        *HEAD = cmp;
		        }

		        if (cmp_pre != NULL) {
			        cmp_pre->next = cur;
		        } else {
			        *HEAD = cur;
		        }

		        temp = cur->next;
		        cur->next = cmp->next;
		        cmp->next = temp;

                //指回原本位置
                temp = cur;
                cur = cmp;
                cmp = temp;

            }

            cmp_pre = cmp;
            cmp = cmp->next;
        }

        cur_pre = cur;
        cur = cur->next;
		
    }

}
