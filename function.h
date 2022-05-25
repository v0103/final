#ifndef FUNCTION_H
#define FUNCTION_H
  /************************************************************************
   * Add: Add a new item to the database system.                          *
   *      The program must print an error message                         *
   *      if the item is already in the database.                         *
   ************************************************************************/
  void Add(struct item *head, struct item *new_member);

  /************************************************************************
   * Delete: Delete a given item from the database.                       *
   *         The program must print an error message                      *
   *         if there is no matching item to be deleted in the database.  *
   ************************************************************************/
  void Delete(struct item *head, struct item *target);

  /************************************************************************
   * Traverse: Print all items in the database in a specific format.      *
   ************************************************************************/
  void Traverse(struct item **HEAD);

  /************************************************************************
   * Search: Given certain information about the item,                    *
   *         the program needs to find and print the specific item.       *
   ************************************************************************/
  void Search(struct item **HEAD, char *type, char *goal);

  /************************************************************************
   * Sort_ascending: Sort all the items in ascending order according to   *
   *                 the given data. For example,  you can sort products  *
   *                 by their prices or expired dates.                    *
   ************************************************************************/
  void Sort_ascending(struct item *head,char data);

  /************************************************************************
   * Sort_descending: Sort all the items in descending order according to *
   *                  the given data. For example,  you can sort products *
   *                  by their prices or expired dates.                   *
   ************************************************************************/
  Sort_descending(struct item *head,char data);

  /************************************************************************
   *Swap: Swap two nodes, not only change the data in the node.           *
   ************************************************************************/
  void Swap(struct item *previous,struct item *a,struct item *b) ;

  /************************************************************************
   * Compare: Compare two players data, print who wins in which data.     *
   ************************************************************************/
  void Compare(struct item *head,char player1,char player2);

#endif
