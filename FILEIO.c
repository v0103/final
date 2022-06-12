#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "FILEIO.h"

/*build linked list*/
struct item* _BUILD(FILE *fp){
    int reb, ast, stl, blk,pts;
    char pos;
    float fg;
    char player[60],team[10];
    struct item *list=NULL;

    while(fscanf( fp, "%[^\t] %c %s %f %d %d %d %d %d\r\n", player, &pos, team, &fg, &reb, &ast, &stl, &blk, &pts)!=EOF ){ //scanf until the end of file
        struct item *node = malloc(sizeof(struct item));                                                               // malloc node

        strcpy(node->total_name, player);                                                                              // save data to struct
        node->POS = pos;
        strcpy(node->team, team);
        node->FG = fg;
        node->REB = reb;
        node->AST = ast;
        node->STL = stl;
        node->BLK = blk;
        node->PTS = pts;

        if(list==NULL){                                                                                                 //linked list
            node->next = NULL;
        }
        else{
            node->next = list;
        }
        list = node;
    }
    return list;
}

void _update_file(FILE *fp,struct item **HEAD) {
    struct item *temp = *HEAD;

    if (temp == NULL) {
        printf("the list is null\n");
        return;
    }
    //int i=0;
    while (temp != NULL) {
    	//i++;
        fprintf(fp,"%s\t%c\t%s\t%f\t%d\t%d\t%d\t%d\t%d\n", temp->total_name, temp->POS, temp->team, temp->FG, temp->REB, temp->AST, temp->STL, temp->BLK, temp->PTS);
        
        temp = temp->next;
    }
    //printf("%d\n",i);
}
