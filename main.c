#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
//#include "function.h"
#include "FILEIO.h"

int main()
{
    struct item *list,*add_item,*manual_item;
    //add test
    add_item.AST = 1;
    add_item.BLK = 1;
    add_item.STL = 1;
    add_item.REB = 1;
    add_item.FG = 0.5;
    add_item.POS = '+';//position
    add_item.PTS = 1;//total point
    add_item.total_name = "add_test_name";//total name
    add_item.team = "add_test_team";
    //delete,search test
    /*
    delete_item.AST = 1;
    delete_item.BLK = 1;
    delete_item.STL = 1;
    delete_item.REB = 1;
    delete_item.FG = 0.5;
    delete_item.POS = '+';//position
    delete_item.PTS = 1;//total point
    delete_item.total_name = "Steven Adams";//total name
    delete_item.team = "NOP";
    */
    //initiation
    printf("Program Start!\n");
    _READ(list);//database should be determine
    //
    int option=0,input=0;
    //function
    while(option != 8)
    {
        printf("[1]Add [2]Delete [3]Compare [4]Search [5]Sort(ascend) [6]Sort(descend) [7]Traverse [8]exit");
        scanf("%d", &option);
        //printf("(1)auto (2)manual input");
        //scanf("%d", &input);
        datum_input(manual_item);
        if(option == 1)
        {
            Add(list, manual_item);
            Traverse(list);
        }
        else if(option == 2)
        {
            Delete(list, manual_item);
            Traverse(list);
        }
        else if(option == 3)
        {
            struct item cmp_item;
            datum_input(cmp_item);
            Compare(list,manual_item,cmp_item);
        }
        else if(option == 4)
        {
            char post[50],actual[50];
            printf("input NAME/TEAM/POS:");
            scanf("%s", &post);
            printf("input name/team/pos:");
            scanf("%s", &actual);
            Search(list, post, actual);
        }

        else if(option == 5)
        {
            char cmp_data[50]
            printf("input AST/BLK/STL/REB/FG:");
            scanf("%s", &cmp_data);
            Sort_ascending(list, cmp_data);//too long?
            Traverse(list);
        }
        else if(option == 6)
        {
            char cmp_data[50]
            printf("input AST/BLK/STL/REB/FG:");
            scanf("%s", &cmp_data);
            Sort_descending(list, cmp_data);//too long?
            Traverse(list);
        }
        else if(option == 7)
        {
            Traverse(list);
        }
        else{
            continue;
        }
    }
    printf("Program Termination.\n");
    return 0;
}

void datum_input(struct item *build)//build the target
{
    printf("item\tAST:");   scanf("%d",&build.AST);
    printf("item\tBLK:");   scanf("%d",&build.BLK);
    printf("item\tSTL:");   scanf("%d",&build.STL);
    printf("item\tREB:");   scanf("%d",&build.REB);
    printf("item\tFG:");    scanf("%f",&build.FG);
    printf("item\tPOS:");   scanf("%c",&build.POS);
    printf("item\tPTS:");   scanf("%d",&build.PTS);
    printf("item\tplayer:");scanf("%s",&build.total_name);
    printf("item\tteam:");  scanf("%s",&build.team);
}

/*read and save data*/
void _READ(struct item *list)
{
    FILE *fp;
    fp = fopen(FILE_NAME, "r"); //open file ,r,w,a which one?
    if (fp == NULL)
    {
        printf("Can't open %s\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    //struct item *list;
    list=_BUILD(fp);
    //_print(list);
    fclose(fp); // close file
}
