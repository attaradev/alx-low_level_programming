/**
 * File: main.h
 * Author: Mike Attara
 * Desc: Header file for function declarations
 */

#ifndef HEADER_FILE
#define HEADER_FILE

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif /* HEADER_FILE*/