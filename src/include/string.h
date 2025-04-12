#ifndef __solo_string__
#define __solo_string__

#include <arch/types.h>


size_t strlen (register const char *s);
size_t strnlen(register const char *s, size_t n);

char *strchr (register const char *s, int c);
char *strrchr(register const char *s, int c);

char *strcpy (char *s1, register const char *s2);
char *strncpy(char *s1, register const char *s2, size_t n);

int strcmp (register const char *s1, register const char *s2);
int strncmp(register const char *s1, register const char *s2, size_t n);

char *strcat (char *s1, register const char *s2);
char *strncat(char *s1, register const char *s2, size_t n);

char *strpbrk(const char *s1, const char *s2);
size_t strspn(const char *s, const char *accept);

char *strtok (char *s, const char *delim);

void *memcpy (void *s1, const void *s2, size_t len);
void *memcpyw(void *s1, const void *s2, size_t len);

void *memset (void *s, register int c, size_t len);
void *memsetw(void *s, register int c, size_t len);

void *memmove(void *s1, const void *s2, size_t len);

#endif
