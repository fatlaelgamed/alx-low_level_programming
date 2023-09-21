#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_s;
size_t print_list(const list_t *h);
#endif
