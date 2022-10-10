#ifndef MASK
#define MASK
#ifndef ABS
#define ABS

#define MASK(x) ((x) >> (4 * 8 - 1))
#define ABS(x) ( (MASK(x)) + (x) ^ (MASK(x)) )
#endif

