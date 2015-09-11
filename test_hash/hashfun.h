/**********************************************
* hashfun.h
*
*  Created on: 2015-04-17
*      Author: xifengming
*       Email: xifengming@vip.sina.com
*    Comments: hash function
 *********************************************/
#ifndef _HASH_FUN_H
#define _HASH_FUN_H

#ifdef __cplusplus
extern "C" {
#endif

unsigned int Str_Hash(const void *key,size_t len);
unsigned int GenCase_Hash(const unsigned char *buf, int len); 
unsigned int Hash4Bytes(const void *key,size_t len);  
#ifdef __cplusplus
}
#endif

#endif
