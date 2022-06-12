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

