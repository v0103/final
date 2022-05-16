#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

void Add();/*Add a new item to the database system. The program must print an error message if
the item is already in the database.*/

void Delete();/*Delete a given item from the database. The program must print an error message if
there is no matching item to be deleted in the database.*/

void Traverse();/*Print all items in the database in a specific format.*/

void Search();/*Given certain information about the item, the program needs to find and print the
specific item*/

void Sort(struct item **headref,int data,int dir);/*Sort all the items in ascending or descending order according to the given data. For
example, you can sort products by their prices or expired dates*/

void Spilt(struct item *head,struct item **front,struct item **back)

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

void Delete(){

}

void Traverse(){

}

void Search(){

}

void Sort(struct item **headref,int data,int dir){
   struct item *head=*headref;
   struct item *a;
   struct item *b;
   
   if(head==NULL||head->next==NULL){
       return;
   }
   
   Spilt(head,&a,&b);
    
   Sort(&a);
   Sort(&b); 
    
    
}

void Spilt(struct item *head,struct item **front,struct item **back){
    struct item *slow;
    struct item *fast;
    slow=head;
    fast=head->next;
    
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }
    
    *front=head;
    *back=slow->next;
    slow->next=NULL;
}
