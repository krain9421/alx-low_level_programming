#ifndef MASK

#define MASK(x) ((x) >> (4 * 8 - 1))
#endif

#ifndef ABS

#define ABS(x) ( (MASK(x)) + (x) ^ (MASK(x)) )
#endif

