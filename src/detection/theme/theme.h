#pragma once

#include "neurofetch.h"
#include "modules/theme/option.h"

typedef struct FFThemeResult
{
    FFstrbuf theme1;
    FFstrbuf theme2;
} FFThemeResult;

const char* ffDetectTheme(FFThemeResult* result);
