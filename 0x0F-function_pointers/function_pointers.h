#ifndef HEADER_FILE
#define HEADER_FILE
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, int size, void (*action)(int));
#endif
