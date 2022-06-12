#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
//#include "function.h"
#include "Add.h"
#include "Delete.h"
#include "Compare.h"
#include "Search.h"
#include "Sort.h"
#include "Traverse.h"
#include "Stats_leader.h"
#include "Personal_analysis.h"
#include "FILEIO.h"
#define FILE_NAME "nba.txt"

void datum_input();
//void _print();

int main()
{
    struct item *list,*test_item,*manual_item,*add_item;
    add_item = malloc(sizeof(struct item));
    test_item = malloc(sizeof(struct item));
    manual_item = malloc(sizeof(struct item));

    /*file read*/
    FILE *fp;
    fp = fopen(FILE_NAME, "r");
    if (fp == NULL)
    {
        printf("Can't open %s\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    list=_BUILD(fp);
    fclose(fp); // close file
    //initiation
    strcpy(manual_item->total_name,"0");
    strcpy(manual_item->team,"0");
    manual_item->next=NULL;

    printf("***Program Start!***\n");

    int option=0,input=0;
    //function
    while(1)
    {
        printf("[1]Add [2]Delete [3]Compare [4]Search [5]Sort(ascend) [6]Sort(descend) [7]Traverse [8]Personal_analysis [9]exit:");
        scanf("%d", &option);
        if(option == 9)
        {
            printf("exit!\n");
            break;
        }
        if(option == 1)
        {
            printf("input a structure data for use.\n");
            getchar();
            datum_input(manual_item,2);
            Add(list, manual_item);
        }
        else if(option == 2)
        {
            printf("input a structure data for use.\n");
            getchar();
            datum_input(manual_item,1);
            Delete(list, manual_item->total_name);
        }
        else if(option == 3)
        {
            struct item *cmp_item;
            cmp_item = malloc(sizeof(struct item));
            printf("input player1 name:\n");
            getchar();
            datum_input(cmp_item,1);
            printf("input player2 name:\n");
            datum_input(manual_item,1);
            Compare(list,cmp_item->total_name,manual_item->total_name);
            free(cmp_item);
        }
        else if(option == 4)
        {
            char post[10]= {"0"},actual[50]= {"0"},replace[50]= {"0"};
            printf("input item NAME/TEAM/POS:");
            scanf("%s", post);
            printf("input actual name/team/pos:");
            //scanf("%s", actual);
            getchar();
            fgets(replace,50,stdin);
            for(int i=0; i<strlen(replace)-1; i++)
                actual[i]=replace[i];
            //printf("%s",actual);
            Search(&list, post, actual);
        }
        else if(option == 5)
        {
            char cmp_data[10];
            printf("input AST/BLK/STL/REB/FG/PTS:");
            scanf("%s", cmp_data);
            Sort_ascending(&list, cmp_data);//too long?
            Traverse(&list);
        }
        else if(option == 6)
        {
            char cmp_data[10];
            printf("input AST/BLK/STL/REB/FG/PTS:");
            scanf("%s", cmp_data);
            Sort_descending(&list, cmp_data);//too long?
            Traverse(&list);
        }
        else if(option == 7)
        {
            int choose = 0;
            printf("[1]print all [2]print stats leader:");
            scanf("%d", &choose);

            if (choose == 1)
                Traverse(&list);
            else
                Stats_leader(&list);
        }
        else if(option == 8)
        {
            printf("input player's name.\n");
            getchar();
            datum_input(manual_item,1);
            Personal_analysis(list, manual_item->total_name);
        }
        else
        {
            printf("wrong function option\n");
            continue;
        }
    }
    /*file write*/
    FILE *fp_w;
    fp_w = fopen(FILE_NAME, "w");
    _update_file(fp_w,&list);
    printf("***Program Termination.***\n");
    //free space
    free(add_item);
    free(test_item);
    free(manual_item);
    return 0;
}

void datum_input(struct item *build, int n)//build the target
{
    char replace[50]= {"0"};
    for(int i=0; i<50; i++)
        build->total_name[i]=replace[i];

    printf("item\tplayer:");
    fgets(replace,50,stdin);
    for(int i=0; i<strlen(replace)-1; i++)
        build->total_name[i]=replace[i];
    if(n==2)
    {
        printf("item\tteam:");
        scanf("%s", build->team);
        printf("item\tAST:");
        scanf("%d",&build->AST);
        printf("item\tBLK:");
        scanf("%d",&build->BLK);
        printf("item\tSTL:");
        scanf("%d",&build->STL);
        printf("item\tREB:");
        scanf("%d",&build->REB);
        printf("item\tFG:");
        scanf("%f",&build->FG);
        getchar();
        printf("item\tPOS:");
        scanf("%c",&build->POS);
        printf("item\tPTS:");
        scanf("%d",&build->PTS);
    }
}

/*check linked list*/
/*void _print(struct item *list){
    while(list!=NULL){
        printf("%s %d\n", list->total_name, list->PTS);
        list = list->next;
    }
}*/
