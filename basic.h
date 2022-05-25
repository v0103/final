#ifndef BASIC_H
#define BASIC_H
//basic.h

#define FILE_NAME "nba.txt" //move to basic.h?

/*struct name{
    char* first_name;
    char* middle_name;
    char* extra_name;
};*/

extern struct item{
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

#endif // BASIC_H
