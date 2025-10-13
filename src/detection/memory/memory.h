#pragma once

#include "neurofetch.h"
#include "modules/memory/option.h"

typedef struct FFMemoryResult
{
    uint64_t bytesUsed;
    uint64_t bytesTotal;
} FFMemoryResult;

const char* ffDetectMemory(FFMemoryResult* ram);
