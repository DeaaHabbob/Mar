#pragma once

#ifdef MAR_PLATFORM_WINDOWS
    #ifdef MAR_BUILD_DLL
        #define MAR_API __declspec(dllexport)
    #else MAR_BUILD_DLL
        #define MAR_API __declspec(dllimport)
    #endif
#else
    #error Mar only support windows!
#endif