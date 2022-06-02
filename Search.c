#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
#include "Search.h"
void Search(struct item **HEAD, char *type, char *goal) {

    /*
    example:
    search_list(&list, "NAME", "S.Curry");
    search_list(&list, "TEAM", "LAL");
    search_list(&list, "POS", "C");
    */

    int search = 0;
    struct item *temp = *HEAD;

    if (!strcmp(type, "NAME")) {

        while (temp != NULL) {

            if (!strcmp(temp->total_name, goal)) {
                search = 1;
                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%s\t%s\t%c\t%d\t%d\t%d\t%d\t%d\t%f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);
            }

            temp = temp->next;
        }

    } else if (!strcmp(type, "TEAM")) {

        while (temp != NULL) {

            if (!strcmp(temp->team, goal)) {
                search = 1;

                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%s\t%s\t%c\t%d\t%d\t%d\t%d\t%d\t%f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);

            }

            temp = temp->next;
        }

    } else if (!strcmp(type, "POS")) {

        while (temp != NULL) {

            if (temp->POS == goal[0]) {
                search = 1;
                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%s\t%s\t%c\t%d\t%d\t%d\t%d\t%d\t%f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);
            }

            temp = temp->next;
        }

    }

    if (!search) {
        printf("Not Found\n");
    }

}
