#ifndef MAIN_H
#define MAIN_H

/**
 
  *void prototypes()
  *int prototypes()
  */

int _putchar (char);
char *_memset(char *s,char b, unsigned int n);
char *_memcpy(char *dest,char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strapn(char *s, char *accept);
char *_strbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chess board(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /*MAIN_H*/
