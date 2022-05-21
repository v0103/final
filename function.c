#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
#include "basic.h"

void Add()
{

}

void Delete()
{

}

void Traverse(struct item **HEAD) 
{
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

void Search(struct item **HEAD, char *type, char *goal) 
{

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
                printf("%-10s\t%3s\t%c\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);

            }

            temp = temp->next;
        }

    } else if (!strcmp(type, "TEAM")) {

        while (temp != NULL) {

            if (!strcmp(temp->team, goal)) {
                search = 1;
                
                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%-10s\t%3s\t%c\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);

            }

            temp = temp->next;
        }

    } else if (!strcmp(type, "POS")) {

        while (temp != NULL) {

            if (temp->POS == goal[0]) {
                search = 1;
                
                printf("\nNAME      \tTEAM\tPOS\tPTS\tREB\tAST\tSTL\tBLK\tFG%%\n\n");
                printf("%-10s\t%3s\t%c\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", temp->total_name, temp->team, temp->POS, temp->PTS, temp->REB, temp->AST, temp->STL, temp->BLK, temp->FG);

            }

            temp = temp->next;
        }

    }

    if (!search) {
        printf("Not Found\n");
    }

}

void Sort(struct item *head,data,int dir)
{
    int swapped=0;
    struct item *pre=NULL;
    struct item *now;
    struct item *now_next;
    struct item *lastptr = NULL;
    struct item *temp;
    if (head == NULL) //check if the list is empty
    {
        return;
    }
    do
    { 
        swapped = 0;
        pre = NULL;
        now = head;
        now_next = now->next;
        while (now_next != lastptr) //check if the non swapped last node
        { 
            if(strcmp(dir,"descending")==0)  //sort with descending
            {
                if (now->data < now_next->data)
                {  
                    Swap(pre, now, now_next); 
                    swapped = 1; //swap happened
                    temp = now; //change swapped node pointer
                    now = now_next;
                    now_next = temp;
                    if(pre==NULL)  //change head point to new one
                    { 
                        head = p;
                    } 
                }
            }
            else if(strcmp(dir,"ascending")==0) //sort with ascending
            {
                if (now->data > now_next->data)
                {  
                    Swap(pre, now, now_next); 
                    swapped = 1; //swap happened
                    temp = now; //change swapped node pointer
                    now = now_next;
                    now_next = temp;
                    if(pre==NULL)  //change head point to new one
                    { 
                        head = p;
                    } 
                }
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
    if(previous == NULL) //which we want to swap have head node
    {
        a->next = b->next;
        b->next = a;
    }
    else
    {
        previous->next = b;
        a->next = b->next;
        b->next = a;
    }
}
