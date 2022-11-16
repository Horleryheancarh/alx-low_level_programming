#ifndef _function_pointers_h_
#define _function_pointers_h_
#include <stddef.h>

void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int, int (*)(int));

#endif
