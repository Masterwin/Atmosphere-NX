#ifndef EXOSPHERE_SEALED_KEYS_H
#define EXOSPHERE_SEALED_KEYS_H

#include <stdint.h>

/* Key sealing/unsealing functionality. */

#define CRYPTOUSECASE_AES 0
#define CRYPTOUSECASE_RSAPRIVATE 1
#define CRYPTOUSECASE_SECUREEXPMOD 2
#define CRYPTOUSECASE_RSAOAEP 3
#define CRYPTOUSECASE_RSAIMPORT 4
#define CRYPTOUSECASE_UNK5 5
#define CRYPTOUSECASE_UNK6 6

#define CRYPTOUSECASE_MAX 4
#define CRYPTOUSECASE_MAX_5X 7

void seal_titlekey(void *dst, size_t dst_size, const void *src, size_t src_size);
void unseal_titlekey(unsigned int keyslot, const void *src, size_t src_size);

void seal_key(void *dst, size_t dst_size, const void *src, size_t src_size, unsigned int usecase);
void unseal_key(unsigned int keyslot, const void *src, size_t src_size, unsigned int usecase);

#endif