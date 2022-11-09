#ifndef _main_h_
#define _main_h_

char *create_array(unsigned int, char);
char *_strdup(char *str);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int, char **);

#endif
