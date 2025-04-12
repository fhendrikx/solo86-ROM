#include <string.h>


char *strchr(register const char *s, int c)
{
    while (*s && (*s != c))
        s++;

    if(*s == c)
        return((char*) s);

    return ((char *) NULL);
}

char *strrchr(register const char *s, int c)
{
    char *cp = (char *) NULL;

    while(*s) {
        if(*s == c)
            cp = (char*) s;
        s++;
    }

    return(cp);
}

size_t strlen(register const char *s)
{
    register int n = 0;

    while(*s++)
        n++;

    return(n);
}

size_t strnlen(register const char *s, size_t n)
{
    register int m = n;

    while (*s && n){
        s++;
        n--;
    }

    return (m - n);
}

char *strcpy(char *s1, register const char *s2)
{
    register char *sp1 = s1;

    while(*s2)
        *sp1++ = *s2++;

    *sp1 = '\0';

    return(s1);
}

char *strncpy(char *s1, register const char *s2, size_t n)
{
    register char *sp1 = s1;

    while(*s2 && n--)
        *sp1++ = *s2++;

    if (n)
        *sp1 = '\0';

    return(s1);
}

int strcmp(register const char *s1, register const char *s2)
{
    register int dif;

    while(*s1)
        if ((dif = (*s1++ - *s2++)))
            return(dif);

    return(*s1 - *s2);
}

int strncmp(register const char *s1, register const char *s2, size_t n)
{
    register int dif;

    while(*s1 && n-- > 1)
        if ((dif = (*s1++ - *s2++)))
            return(dif);

    return(*s1 - *s2);
}

char *strcat(char *s1, register const char *s2)
{
    register char *sp1 = s1;

    while(*sp1)
        sp1++;

    while(*s2)
        *sp1++ = *s2++;
    *sp1 = '\0';

    return(s1);
}

char *strncat(char *s1, register const char *s2, size_t n)
{
    register char *sp1 = s1;

    while(*sp1)
        sp1++;

    while(*s2 && n--)
        *sp1++ = *s2++;
    *sp1 = '\0';

    return(s1);
}
