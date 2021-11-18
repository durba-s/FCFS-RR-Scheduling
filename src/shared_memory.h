#ifndef SHARED_MEMORY
#define SHARED_MEMORY

#include <stdbool.h>

char *attach_memory_block(const char *filename, size_t size);
bool detach_memory_block(const char *block);
bool destroy_memory_block(const char *filename);

#endif