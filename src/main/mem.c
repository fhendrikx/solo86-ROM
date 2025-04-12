#include <string.h>


void *memcpy(void *s1, const void *s2, size_t len)
{
    register char *p1 = (char *) s1;
    register const char *p2 = (char *) s2;

    if (len) {
        len++;

        while (--len > 0) {
            *p1++ = *p2++;
        }
    }

    return (s1);
}

void *memcpyw(void *s1, const void *s2, size_t len)
{
    register short *p1 = (short *) s1;
    register const short *p2 = (short *) s2;

    if (len) {
        len++;

        while (--len > 0) {
            *p1++ = *p2++;
        }
    }

    return (s1);
}

void *memset(void *s, register int c, size_t len)
{
    register char *s1 = (char *) s;

    if (len) {
        len++;

        while (--len > 0) {
            *s1++ = c;
        }
    }

    return (s);
}

void *memsetw(void *s, register int c, size_t len)
{
    register short *s1 = (short *) s;

    if (len) {
        len++;

        while (--len > 0) {
            *s1++ = c;
        }
    }

    return (s);
}

void *memmove(void *s1, const void *s2, size_t len)
{
    register unsigned char *d;
    register unsigned char *s;

    if(s1 < s2){
        d = (unsigned char *) s1;
        s = (unsigned char *) s2;

        while (len){
            *d = *s;
            d++;
            s++;
            len--;
        }
    }
    else {
        d = ((unsigned char *) s1) + len;
        s = ((unsigned char *) s2) + len;

        while (len){
            d--;
            s--;
            *d = *s;
            len--;
        }
    }

    return (s1);
}
