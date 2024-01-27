/**
 * Copyright © 2024 
 *
 * @file    TESTMACROS.h
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   TESTMACROS 
 * @version No oficial
 *     
 */

#ifndef TESTMACROS_H_
#define TESTMACROS_H_

/* system headers */

/* own headers */

/*****************************************************************************/
/* helper macros */
#define TESTMACROS_nZERO						(0U)
#define TESTMACROS_nONE							(1U)
#define TESTMACROS_nMINU8						(0U)
#define TESTMACROS_nMAXU8						(255U)
#define TESTMACROS_nMINU16						(0U)
#define TESTMACROS_nMAXU16						(65535U)
#define TESTMACROS_nMINU32						(0U)
#define TESTMACROS_nMAXU32						(4294967295U)
#define TESTMACROS_nMINS8						(-128)
#define TESTMACROS_nMAXS8						(127)
#define TESTMACROS_nMINS16						(-32768)
#define TESTMACROS_nMAXS16						(32767)
#define TESTMACROS_nMINS32						(-2147483648)
#define TESTMACROS_nMAXS32						(2147483647)
#define TESTMACROS_nMiddle_value_of(x,y)		((((y) - (x)) / 2) + (x))
#define TESTMACROS_nRight_approximation_of(x)	((x) + TESTMACROS_nONE)
#define TESTMACROS_nLeft_approximation_of(x)	((x) - TESTMACROS_nONE)

#define swapNibble(Data)	((((Data) >> 4) & 0xF) |	\
							 (((Data) << 4) & 0xF0))

#define swapHalfWord(Data)	((((Data) >> 8) & 0xFF) |	\
							 (((Data) << 8) & 0xFF00))

#define swapWord(Data)		((((Data) >> 24) & 0xFF) |	\
				   	   	   	 (((Data) >> 8) & 0xFF00) |	\
							 (((Data) << 8) & 0xFF0000) |	\
							 (((Data) << 24) & 0xFF000000))

/* exported variables */

/* exported functions */

#endif /* TESTMACROS_H_ */
