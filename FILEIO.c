#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "nba.txt" //move to basic.h?

struct item{
        int AST;//assist
        int BLK;//block
        int STL;//steal
        int REB;//rebound(board)
        float FG;//field goal
        char POS;//position
        int PTS;//total point
        char total_name[50];//total name
        char team[10];
        struct item *next;
};

void _READ();
struct item* _BUILD(FILE *fp);
void _print(struct item *list);

int main(){

    _READ();

    return 0;
}

void _READ(){
    FILE *fp;
    fp = fopen(FILE_NAME, "r"); //open file ,r,w,a which one?
    if (fp == NULL) {
        printf("Can't open %s\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    struct item *list;
    list=_BUILD(fp);
    //_print(list);
    fclose(fp); // close file
}

struct item* _BUILD(FILE *fp){
    int reb, ast, stl, blk,pts;
    char pos;
    float fg;
    char player[60],team[10];
    struct item *list=NULL;
    
    while(fscanf( fp, "%[^\t] %c %s %f %d %d %d %d %d", player, &pos, team, &fg, &reb, &ast, &stl, &blk, &pts)!=EOF ){ //scanf until the end of file
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
        
        if(list==NULL){
            node->next = NULL;
        }
        else{
            node->next = list;
        }
        list = node;
    }
    return list;
}

/*void _print(struct item*list){
    while(list!=NULL){
        printf("%s %d\n", list->total_name, list->PTS);
        list = list->next;        
    }

}*/