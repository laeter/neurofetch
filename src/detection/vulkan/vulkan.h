#pragma once

#include "neurofetch.h"
#include "modules/vulkan/option.h"

typedef struct FFVulkanResult
{
    FFstrbuf driver;
    FFstrbuf apiVersion;
    FFstrbuf conformanceVersion;
    FFstrbuf instanceVersion;
    FFlist gpus; //List of FFGPUResult, see detection/gpu/gpu.h
    const char* error;
} FFVulkanResult;

FFVulkanResult* ffDetectVulkan();
