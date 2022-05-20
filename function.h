#ifndef FUNCTION_H
#define FUNCTION_H
  /************************************************************************
   * Add: Add a new item to the database system.                          * 
   *      The program must print an error message                         *
   *      if the item is already in the database.                         *
   ************************************************************************/
  void Add();

  /************************************************************************
   * Delete: Delete a given item from the database.                       *
   *         The program must print an error message                      * 
   *         if there is no matching item to be deleted in the database.  *
   ************************************************************************/
  void Delete();

  /************************************************************************
   * Traverse: Print all items in the database in a specific format.      *
   ************************************************************************/
  void Traverse();

  /************************************************************************
   * Search: Given certain information about the item,                    *
   *         the program needs to find and print the specific item.       *
   ************************************************************************/
  void Search();

  /************************************************************************
   *Sort: Sort all the items in ascending or descending order             *
   *      according to the given data. For example, you can sort          *
   *      products by their prices or expired dates.                      *
   ************************************************************************/
  void Sort();

  /************************************************************************
   *Swap: Swap two nodes, not only change the data in the node.           *
   ************************************************************************/
  void Swap();

#endif
