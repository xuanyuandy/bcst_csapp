/* BCST - Introduction to Computer Systems
 * Author:      yangminz@outlook.com
 * Github:      https://github.com/yangminz/bcst_csapp
 * Bilibili:    https://space.bilibili.com/4564101
 * Zhihu:       https://www.zhihu.com/people/zhao-yang-min
 * This project (code repository and videos) is exclusively owned by yangminz 
 * and shall not be used for commercial and profitting purpose 
 * without yangminz's permission.
 */

#include <stdint.h>
#include <stdlib.h>

// include guards to prevent double declaration of any identifiers 
// such as types, enums and static variables
#ifndef INTERRUPT_GUARD
#define INTERRUPT_GUARD

// we only use stack0 of TSS
// This information is stored in main memory
typedef struct TSS_S0
{
    uint64_t ESP0;
    uint64_t SS0;
} tss_s0_t;


void call_interrupt_stack_switching(uint64_t int_vec);

#endif