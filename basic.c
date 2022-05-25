#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic.h"

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
