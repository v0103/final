#ifndef SORT_H
#define SORT_H
  /************************************************************************
   *Swap: Swap two nodes, not only change the data in the node.           *
   ************************************************************************/
  void Swap(struct item *previous,struct item *a,struct item *b) ;

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
  void Sort_descending(struct item *head,char data);
#endif
