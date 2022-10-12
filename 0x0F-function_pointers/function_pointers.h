/**
 * File: function_pointers.h
 * Author: Mike Attara
 * Desc: Header file containing function declarations
 */

#ifndef HEADER_FILE
#define HEADER_FILE

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* HEADER_FILE */