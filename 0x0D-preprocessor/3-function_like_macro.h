#ifndef ABSO
#define ABSO
#ifndef MASKO
#define MASKO

#define MASK(x) ((x) >> (4 * 8 - 1))
#define ABS(x) ( (MASK(x)) + (x) ^ (MASK(x)) )
#endif

