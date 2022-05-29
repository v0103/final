#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Sort.h"

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
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
        	switch(data){
			case 1:
				if(now->PTS < now_next->PTS){ 
					Swap(pre,now,now_next); 
					swapped = 1;   
					temp = now;      
                    			now = now_next;         
                    			now_next = temp;      
                   			if(pre==NULL) {    
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
                        				head = p;
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
                        			head = p; 
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
