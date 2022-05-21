void Add(struct item *, struct item *);

void Add(struct item *head, struct item *new) {
    struct item *origin;
    origin = head;       // record the original place
    if (head == NULL) {  // check if the list is empty
        return;
    }
    for (head; head != NULL; head = head->next) {          //if the item is already in the database.
        if (strcmp(new->tatal_name, head->total_name)== 0) {      
            head = orgin;
            printf("the item is already in the database.\n");
            return;
        }
    }
    for (head; head != NULL; head = head->next) {
        if (head->next == NULL) {             // add to the last do nothing
            head->next = new;
            head = origin;
            return;
        }
    }
}