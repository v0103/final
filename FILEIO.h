#ifndef FILEIO_H
#define FILEIO_H
  /************************************************************************
   * Traverse: Print all items in the database in a specific format.      *
   ************************************************************************/
  //void _READ();
  struct item* _BUILD(FILE *fp);
  void _print(struct item *list);
#endif
