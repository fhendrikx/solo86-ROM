#ifndef __vsprintf__
#define __vsprintf__

#include <stdarg.h>

int sprintf(char * buf, const char *fmt, ...);
int vsprintf(char *buf, const char *fmt, va_list args);

#endif
