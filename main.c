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
#include "FILEIO.h"
#define FILE_NAME "nba.txt" //move to basic.h?
void datum_input();
void _print();

int main()
{
    struct item *list,*test_item,*manual_item,*add_item;
    add_item = malloc(sizeof(struct item));
    test_item = malloc(sizeof(struct item));
    manual_item = malloc(sizeof(struct item));

    /*file in*/
    FILE *fp;
    fp = fopen(FILE_NAME, "r+"); //open file ,r,w,a which one?
    if (fp == NULL)
    {
        printf("Can't open %s\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    list=_BUILD(fp);
    /*file in*/


    //struct *add_item;
    //add data
    //player    POS team        FG  REB AST STL BLK PTS
    //Add_Test  T	add_test	0.5	1	1	1	1	1

//    add_item->AST = 0;
//    add_item->BLK = 0;
//    add_item->STL = 0;
//    add_item->REB = 0;
//    add_item->FG = 0.0;
//    add_item->POS = 'T';//position
//    add_item->PTS = 0;//total point
//    strcpy(add_item->total_name, "Add Test");//total name
//    strcpy(add_item->team, "add");
//    add_item->next = NULL;
    //struct *test_item;
    //test data
    //player        POS team FG     REB AST STL BLK PTS
    //Steven Adams	C	NOP	 0.614	514	111	54	38	438
//    test_item->AST = 111;
//    test_item->BLK = 38;
//    test_item->STL = 54;
//    test_item->REB = 514;
//    test_item->FG = 0.614;
//    test_item->POS = 'C';//position
//    test_item->PTS = 438;//total point
//    strcpy(test_item->total_name, "Steven Adams");//total name
//    strcpy(test_item->team, "NOP");
//    test_item->next = NULL;
    //
    strcpy(manual_item->total_name,"0");
    strcpy(manual_item->team,"0");
    manual_item->next=NULL;
    //initiation
    printf("***Program Start!***\n");

    int option=0,input=0;
    //function
    while(1)
    {
        printf("[1]Add [2]Delete [3]Compare [4]Search [5]Sort(ascend) [6]Sort(descend) [7]Traverse [8]exit:");
        scanf("%d", &option);
        if(option == 8){
            printf("exit!\n");
            break;
        }
        if(option == 1)
        {
//            printf("Add : [1]auto(Add Test) [2]manual input:");
//            scanf("%d", &input);
//            if(input == 1)
//                Add(list, add_item);
//            else if(input == 2){
                printf("input a structure data for use.\n");
                getchar(); datum_input(manual_item,2);
                Add(list, manual_item);
//            }
//            }
//            else{
//                printf("wrong input option\n");
//                continue;
//            }
            //printf("Traverse test\n");
            //Traverse(&list);
        }
        else if(option == 2)
        {
//            printf("Delete : [1]auto(Steven Adams) [2]manual input:");
//            scanf("%d", &input);
//            if(input == 1)
//                Delete(list, test_item);
//            else if(input == 2){
                printf("input a structure data for use.\n");
                getchar(); datum_input(manual_item,1);
                Delete(list, manual_item->total_name);
//            }
//            else{
//                printf("wrong input option\n");
//                continue;
//            }
            //Traverse(&list);
        }
        else if(option == 3)
        {
//            printf("Compare : [1]auto(Steven Adams) [2]manual input:");
//            scanf("%d", &input);
            struct item *cmp_item;
            cmp_item = malloc(sizeof(struct item));
            printf("input player1 name:\n");
            getchar(); datum_input(cmp_item,1);
//            if(input == 1)
//                Compare(list,test_item->total_name,cmp_item->total_name);
//            else if(input == 2){
                printf("input player2 name:\n");
                datum_input(manual_item,1);
                Compare(list,cmp_item->total_name,manual_item->total_name);
//            }
//            else{
//                printf("wrong input option\n");
//                continue;
//            }
            free(cmp_item);
        }
        else if(option == 4)
        {
            char post[10]={"0"},actual[50]={"0"},replace[50]={"0"};
            printf("input item NAME/TEAM/POS:");
            scanf("%s", post);
            printf("input actual name/team/pos:");
            //scanf("%s", actual);
            getchar(); fgets(replace,50,stdin);
            for(int i=0;i<strlen(replace)-1;i++)
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
            Traverse(&list);
        }
        else{
                printf("wrong function option\n");
            continue;
        }
    }
    printf("***Program Termination.***\n");
    fclose(fp); // close file
    free(add_item);
    free(test_item);
    free(manual_item);
    return 0;
}

void datum_input(struct item *build, int n)//build the target
{
    char replace[50]={"0"};
    for(int i=0;i<50;i++)
        build->total_name[i]=replace[i];

//    printf("input a structure data for use.\n");
//    printf("item\tAST:");   scanf("%d",&build->AST);
//    printf("item\tBLK:");   scanf("%d",&build->BLK);
//    printf("item\tSTL:");   scanf("%d",&build->STL);
//    printf("item\tREB:");   scanf("%d",&build->REB);
//    printf("item\tFG:");    scanf("%f",&build->FG);
//    getchar();
//    printf("item\tPOS:");   scanf("%c",&build->POS);
//    printf("item\tPTS:");   scanf("%d",&build->PTS);
    printf("item\tplayer:"); fgets(replace,50,stdin);
    for(int i=0;i<strlen(replace)-1;i++)
        build->total_name[i]=replace[i];
    if(n==2){
        printf("item\tteam:");scanf("%s", build->team);
    }
}

/*check linked list*/
/*void _print(struct item *list){
    while(list!=NULL){
        printf("%s %d\n", list->total_name, list->PTS);
        list = list->next;
    }
}*/
