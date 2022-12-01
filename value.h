#ifndef persimmon_value_h
#define persimmon_value_h

#include "common.h"

typedef emun{
    VAL_BOOL,
    VAL_NIL,
    VAL_NUMBER,
} ValueType;

typedef struct{
    ValueType type;
    union{
        bool boolean;
        double number;
    } as;
} Value;

typedef struct{
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);
void printValue(Value value);

#endif