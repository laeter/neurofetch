#pragma once

#include "neurofetch.h"

typedef struct FFLibcResult
{
    const char* name;
    const char* version;
} FFLibcResult;

const char* ffDetectLibc(FFLibcResult* result);
