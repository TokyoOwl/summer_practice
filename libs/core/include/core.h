#pragma once
#ifdef _WIN32
    #ifdef CORE_EXPORTS
        #define CORE_API __declspec(dllexport)
    #else
        #define CORE_API __declspec(dllimport)
    #endif
#else
    #ifdef __GNUC__
        #define CORE_API __attribute__(visibility("default"))
    #else
        #define CORE_API // Пустое для остальных
    #endif
#endif

namespace core{
    CORE_API int base_function();
}
