#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h" 
#include "Search.h"
#include "Traverse.h"
#include "Sort.h"

//basic.h
basic part
struct name{
    string first_name;
    string middle_name;
    string extra_name;
};

struct item{
        int AST;//assist
        int BLK;//block
        int STL;//steal
        int REB;//rebound(board)
        float FG;//field goal
        char POS;//position
        int PTS;//total point
        struct name total_name;//total name
        string team;
        struct item *next;
};
//

void Add();/*Add a new item to the database system. The program must print an error message if
the item is already in the database.*/

void Delete();/*Delete a given item from the database. The program must print an error message if
there is no matching item to be deleted in the database.*/

/*void Traverse();//Print all items in the database in a specific format.*/

/*void Search();//Given certain information about the item, the program needs to find and print the
specific item*/

void Sort(struct item *head,int data,int dir);/*Sort all the items in ascending or descending order according to the given data. For
example, you can sort products by their prices or expired dates*/

void swap(struct item *previous,struct item *a,struct item *b); /*swap two nodes*/

int main()
{
        //File I/O

        //function
        Add total_name team data;
        Delete name;
        Search name;
        Search team;
        sort data sequence;

        return 0;
}

void Add(){

}

/*void Delete(){

}

void Traverse(){

}*/

void Search(){

}

void Sort(struct item *head,int data,int dir)
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
                    swap(pre, now, now_next); 
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
                    swap(pre, now, now_next); 
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

void swap(struct item *previous,struct item *a,struct item *b) 
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


