#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Sort.h"
#include "Traverse.h"
#include "Personal_analysis.h"
void build(struct item **new_datas) {
    *new_datas = malloc(sizeof(struct item));
    while (*new_datas == NULL) {
        *new_datas = malloc(sizeof(struct item));
    }
}
void Personal_analysis(struct item *head, char *Name){
    struct item *temp,*personal_datas,*original;
    int count=0;
    personal_datas = NULL;
    while (head!=NULL){
        if (!strcmp(head->total_name, Name)) {
            struct item *new_datas;
            build(&new_datas);
            strcpy(new_datas->total_name,head->total_name);
            strcpy(new_datas->team,head->team);
            new_datas->POS=head->POS;
            new_datas->PTS=head->PTS;
            new_datas->REB=head->REB;
            new_datas->AST=head->AST;
            new_datas->STL=head->STL;
            new_datas->BLK=head->BLK;
            new_datas->FG=head->FG;
            original=new_datas;
            //temp = head->next;
            new_datas->next = personal_datas;
            personal_datas = new_datas;
            count++;
            //head->next = temp;
        }
        head = head->next;
    }
    personal_datas=original;
    if(count==0){
        printf("there is no matching player to be analyzed in the database.\n");
    }
    else if(count==1){
        printf("the player could not be analyzed in only one team.\n");
    }
    else if(count>1){             //if this player has played for more teams
        char cmp_data[10];
        int opt=0;
        printf("input AST/BLK/STL/REB/FG:");
        scanf("%s", cmp_data);
        printf("[1]Sort(ascend) [2]Sort(descend):");
        scanf("%d", &opt);
        if(opt==1){
            Sort_ascending(&personal_datas, cmp_data);
            Traverse(&personal_datas);
        }
        if(opt==2){
            Sort_descending(&personal_datas, cmp_data);
            Traverse(&personal_datas);
        }
    }
    
}