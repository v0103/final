#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
void Traverse(struct item **HEAD) {

    struct item *temp = *HEAD;

    if (temp == NULL) {
        printf("the list is null\n");
        return;
    }

    printf("NAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n");
    while (temp != NULL) {
        printf("%-10s\t%3s\t%c\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);

        temp = temp->next;
    }
}
