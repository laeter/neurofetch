#pragma once

#include "neurofetch.h"
#include "modules/tpm/option.h"

typedef struct FFTPMResult
{
    FFstrbuf version;
    FFstrbuf description;
} FFTPMResult;

const char* ffDetectTPM(FFTPMResult* result);
