#ifndef 3-FUNCTION_LIKE_MACRO_H
#define 3-FUNCTION_LIKE_MACRO_H

#define MASK(x) ((x) >> (4 * 8 - 1))
#define ABS(x) ( (MASK(x)) + (x) ^ (MASK(x)) )
#endif

