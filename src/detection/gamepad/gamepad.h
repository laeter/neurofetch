#pragma once

#include "neurofetch.h"

typedef struct FFGamepadDevice
{
    FFstrbuf serial;
    FFstrbuf name;
    uint8_t battery; // 0-100%
} FFGamepadDevice;

const char* ffDetectGamepad(FFlist* devices /* List of FFGamepadDevice */);
