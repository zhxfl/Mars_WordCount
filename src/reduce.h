/*
 * reduce.h
 *
 *  Created on: Sep 22, 2013
 *      Author: zhxfl
 */

#ifndef REDUCE_H_
#define REDUCE_H_

#include "MarsInc.h"
//-------------------------------------------------------------------------
//No Reduce in this application
//-------------------------------------------------------------------------
__device__ void REDUCE_COUNT_FUNC;//(void* key, void* vals, size_t keySize, size_t valCount)
__device__ void REDUCE_FUNC;//(void* key, void* vals, size_t keySize, size_t valCount)

#endif /* REDUCE_H_ */
