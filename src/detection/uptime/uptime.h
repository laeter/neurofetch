#pragma once

#include "neurofetch.h"
#include "modules/uptime/option.h"

typedef struct FFUptimeResult
{
    uint64_t bootTime;
    uint64_t uptime;
} FFUptimeResult;

const char* ffDetectUptime(FFUptimeResult* result);
