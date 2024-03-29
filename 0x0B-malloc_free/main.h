#ifndef MAIN_H
#define Main_H

/**
 * File: main.h
 * Auth: Chinonso Obaji
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0B-malloc_free directory.
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);
char *argstostr(int ac, char **av);

#endif
