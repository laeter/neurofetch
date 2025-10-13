#pragma once

#include "neurofetch.h"
#include "modules/wm/wm.h"

const char* ffDetectWMPlugin(FFstrbuf* pluginName);
const char* ffDetectWMVersion(const FFstrbuf* wmName, FFstrbuf* result, FFWMOptions* options);
