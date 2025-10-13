#pragma once

#include "neurofetch.h"

// Things only needed by neurofetch
typedef struct FFdata
{
    FFstrbuf structure;
    bool configLoaded;
} FFdata;

void ffPrepareCommandOption(FFdata* data);
void ffPrintCommandOption(FFdata* data, yyjson_mut_doc* jsonDoc);
void ffMigrateCommandOptionToJsonc(FFdata* data, yyjson_mut_doc* jsonDoc);
bool ffParseModuleOptions(const char* key, const char* value);
