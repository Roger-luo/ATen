#ifndef THZ_GENERIC_FILE
#error "You must define THZ_GENERIC_FILE before including THZGenerateAllTypes.h"
#endif

#ifndef THZGenerateManyTypes
#define THZAllLocalGenerateManyTypes
#define THZGenerateManyTypes
#endif

#include "THZGenerateZDoubleTypes.h"
#include "THZGenerateZFloatTypes.h"

#ifdef THZAllLocalGenerateManyTypes
#undef THZAllLocalGenerateManyTypes
#undef THZGenerateManyTypes
#undef THZ_GENERIC_FILE
#endif
