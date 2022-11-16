#ifndef persimmon_debug_h
#define persimmon_debug_h

#include "../mem/chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif