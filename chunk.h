#ifndef persimmon_chunk_h
#define persimmon_chunk_h

#include "common.h"

typedef enum{
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
} Chunk;

void initChunk(Chunk* Chunk);
void writeChunk(Chunk* chunk, uint8_t byte);

#endif