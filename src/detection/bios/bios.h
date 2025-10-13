#pragma once

#include "neurofetch.h"
#include "modules/bios/option.h"

typedef struct FFBiosResult
{
    FFstrbuf date;
    FFstrbuf release;
    FFstrbuf vendor;
    FFstrbuf version;
    FFstrbuf type;
} FFBiosResult;

const char* ffDetectBios(FFBiosResult* bios);
