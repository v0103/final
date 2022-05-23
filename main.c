#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"
//#include "function.h"
#include "FILEIO.h"

int main()
{
    int option=0;
    //initiation
    printf("Program Start!\n");
    _READ();//database should be determine
    //function
    while(option != 9)
    {
        printf("[1]Add [2]Delete [3]Compare [4]Search [5]Swap [6]Sort(ascend) [7]Sort(descend) [8]Traverse [9]exit")
        switch(option)
        {
        case 1:
            Add(database, add_item);
        case 2:
            Delete(database, delete_item);
        case 3:
            Compare();//to be done
        case 4:
            Search(database, name/team/pos, S.Curry/LAL/C);
        case 5:
            Swap(previous, a, b)//cannot understand
        case 6:
            Sort_ascending();//too long?
        case 7:
            Sort_descending();//maybe combine into one by some parameter?
        case 8:
            Traverse(database);
        }
    }
    printf("Program Terminates.\n");
    return 0;
}

/*read and save data*/
void _READ()
{
    FILE *fp;
    fp = fopen(FILE_NAME, "r"); //open file ,r,w,a which one?
    if (fp == NULL)
    {
        printf("Can't open %s\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    struct item *list;
    list=_BUILD(fp);
    //_print(list);
    fclose(fp); // close file
}
