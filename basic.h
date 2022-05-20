#ifndef BASIC_H
#define BASIC_H
//basic.h
struct name{
    char* first_name;
    char* middle_name;
    char* extra_name;
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
        char* team;
        struct item *next;
};
//
#endif // BASIC_H
