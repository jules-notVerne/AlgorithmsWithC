#include <stdlib.h>
#include <string.h>

#include "list.h"

void list_init(List *list, void (*destroy)(void *data){}

void list_destroy(List *list){}

int list_ins_next(List *list, ListElmt *element, const void *data){}

int list_rem_next(List *list, ListElmt *element, void **data){}

int list_size(const List *list){}

ListElmt *list_head(const List *list){}

ListElmt *list_tail(const List *list){}

int list_is_head(const ListElmt *element){}

int list_is_tail(const ListElmt *element){}

void *list_data(const ListElmt *element){}

ListElmt *list_next(const ListElmt *element){}
