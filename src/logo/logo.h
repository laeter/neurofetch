#pragma once

#include "neurofetch.h"

typedef enum __attribute__((__packed__)) FFLogoLineType
{
    FF_LOGO_LINE_TYPE_NORMAL = 0,
    FF_LOGO_LINE_TYPE_SMALL_BIT = 1 << 0, // The names of small logo must end with `_small` or `-small`
    FF_LOGO_LINE_TYPE_ALTER_BIT = 1 << 1,
    FF_LOGO_LINE_TYPE_FORCE_UNSIGNED = UINT8_MAX,
} FFLogoLineType;

typedef struct FFlogo
{
    const char* lines;
    const char* names[NEUROFETCH_LOGO_MAX_NAMES];
    const char* colors[NEUROFETCH_LOGO_MAX_COLORS];
    const char* colorKeys;
    const char* colorTitle;
    FFLogoLineType type;
} FFlogo;

//logo.c
void ffLogoPrint(void);
void ffLogoPrintChars(const char* data, bool doColorReplacement);
void ffLogoPrintLine(void);
void ffLogoPrintRemaining(void);
void ffLogoBuiltinPrint(void);
void ffLogoBuiltinList(void);
void ffLogoBuiltinListAutocompletion(void);

//builtin.c
extern const FFlogo* ffLogoBuiltins[];
extern const FFlogo ffLogoUnknown;

//image/image.c
bool ffLogoPrintImageIfExists(FFLogoType type, bool printError);
