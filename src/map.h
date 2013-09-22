/*
 * map.h
 *
 *  Created on: Sep 22, 2013
 *      Author: zhxfl
 */

#ifndef MAP_H_
#define MAP_H_

#include "MarsInc.h"
#include "global.h"

__device__ int hash_func(char* str, int len);

__device__ void MAP_COUNT_FUNC;//(void *key, void *val, size_t keySize, size_t valSize)

__device__ void MAP_FUNC;//(void *key, void val, size_t keySize, size_t valSize)

#endif /* MAP_H_ */
