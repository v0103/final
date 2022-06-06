#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Sort.h"
#include "Traverse.h"
#include "Personal_analysis.h"

void Personal_analysis(struct item *head, char *Name){
    struct item *personal_datas,*original;
    int count=0;
    personal_datas = NULL;
    while (head!=NULL){
        if (!strcmp(head->total_name, Name)) {
            if(personal_datas==NULL){      //First team
                personal_datas = head;
                original = personal_datas;
                count++;
            }else{                          //The other teams
                personal_datas->next = head;
                personal_datas = personal_datas->next;
                count++;
            }
        }
        head = head->next;
    }
    personal_datas->next = NULL;
    personal_datas = original;
    if(count==0){
        printf("there is no matching player to be analyzed in the database.\n");
    }
    else if(count==10){
        printf("the player could not be analyzed in only one team.\n");
    }
    else if(count>=1){             //if this player has played for more teams
        char cmp_data[10];
        int opt=0;
        printf("input AST/BLK/STL/REB/FG:");
        scanf("%s", cmp_data);
        printf("[1]Sort(ascend) [2]Sort(descend):");
        scanf("%d", &opt);
        if(opt==1){
            Sort_ascending(personal_datas, cmp_data);
            Traverse(&personal_datas);
        }
        if(opt==2){
            Sort_descending(personal_datas, cmp_data);
            Traverse(&personal_datas);
        }
    }
    
}