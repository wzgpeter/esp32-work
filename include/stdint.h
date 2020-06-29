/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

#ifndef _STDINT_H
#define _STDINT_H


#ifdef __cplusplus
extern "C" {
#endif


typedef signed char         s8_t;
typedef signed short        s16_t;
typedef signed int          s32_t;
typedef signed long long    s64_t;

typedef unsigned char       u8_t;
typedef unsigned short      u16_t;
typedef unsigned int        u32_t;
typedef unsigned long long  u64_t;

typedef int         bt_mesh_atomic_t;


typedef signed char int8_t;
typedef unsigned char uint8_t;

typedef signed short int16_t;
typedef unsigned short uint16_t;

typedef signed int int32_t;
typedef unsigned int uint32_t;

typedef signed long long int64_t;
typedef unsigned long long uint64_t;


/* Limits of Specified-Width Integer Types */
#define INT8_MIN 			-128
#define INT8_MAX 	 		127
#define UINT8_MAX 	 		255

#define INT_LEAST8_MIN 		-128
#define INT_LEAST8_MAX 	 	127
#define UINT_LEAST8_MAX	 	255

#define INT16_MIN 			-32768
#define INT16_MAX 	 		32767
#define UINT16_MAX 	 		65535

#define INT_LEAST16_MIN		-32768
#define INT_LEAST16_MAX	 	32767
#define UINT_LEAST16_MAX 	65535

#define INT32_MIN 	 		(-2147483647L-1)
#define INT32_MAX 	 		2147483647L
#define UINT32_MAX   		4294967295UL

#define INT_LEAST32_MIN  	(-2147483647L-1)
#define INT_LEAST32_MAX  	2147483647L
#define UINT_LEAST32_MAX 	4294967295UL

#define INT64_MIN 			(-9223372036854775807L-1L)
#define INT64_MAX 	 		9223372036854775807L
#define UINT64_MAX 			18446744073709551615U

#define INT_LEAST64_MIN  	(-9223372036854775807L-1L)
#define INT_LEAST64_MAX  	9223372036854775807L
#define UINT_LEAST64_MAX 	18446744073709551615U

#define INT_MAX				32767
#define UINT_MAX			65535

#ifndef bool
#define bool        int8_t
#endif

#ifndef NULL
#define	NULL	((void *)0)
#endif

#ifndef false
#define false       0
#endif

#ifndef true
#define true        1
#endif

typedef int32_t esp_err_t;
typedef int size_t;


#ifdef __cplusplus
}
#endif

#endif /* _STDINT_H */
