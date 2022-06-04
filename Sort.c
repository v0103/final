#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Sort.h"

void Sort_ascending(struct item **HEAD, char data[10]) {
    /*
    先取list的第一項開始往後比，遇到比自己小的就交換，直到list結束。
    再取第二項往後比，以此類推，取到list的前一項為止。
    (從n個裡找出最小值，再從n-1裡找最小值，......)
    */

    struct item *head = *HEAD, *cur = *HEAD, *cur_pre = NULL, *cmp = NULL, *cmp_pre = NULL;
	int num = 0;
    	int val = 0;
    	
	while (head != NULL) {
		num++;
		head = head->next;
	}
	
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
	else {
		val = 6;
	}
	
	for (int i = 0; i < num - 1; i++) {

        cmp = cur->next;
        cmp_pre = cur;

        while (cmp != NULL) {
		switch(val){
			case 1:
				if (cmp->PTS < cur->PTS) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 2:
				if (cmp->REB < cur->REB) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 3:
				if (cmp->AST < cur->AST) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 4:
				if (cmp->STL < cur->STL) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 5:
				if (cmp->BLK < cur->BLK) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 6:
				if (cmp->FG < cur->FG) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
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
    	int val = 0;
    	
	while (head != NULL) {
		num++;
		head = head->next;
	}
	
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
	else {
		val = 6;
	}
	
	for (int i = 0; i < num - 1; i++) {

        cmp = cur->next;
        cmp_pre = cur;

        while (cmp != NULL) {

            switch(val){
			case 1:
				if (cmp->PTS > cur->PTS) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 2:
				if (cmp->REB > cur->REB) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 3:
				if (cmp->AST > cur->AST) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 4:
				if (cmp->STL > cur->STL) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 5:
				if (cmp->BLK > cur->BLK) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
			case 6:
				if (cmp->FG > cur->FG) {
                
                			//swap
                			struct item *temp;

                			if (cur_pre != NULL) {
			        		cur_pre->next = cmp;
					} 
					else {
			        		*HEAD = cmp;
					}

					if (cmp_pre != NULL) {
			        		cmp_pre->next = cur;
					} 
					else {
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
				break;
		}

            cmp_pre = cmp;
            cmp = cmp->next;
        }

        cur_pre = cur;
        cur = cur->next;
		
    }

}
