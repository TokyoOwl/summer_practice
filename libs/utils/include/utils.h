#pragma once
#ifdef _WIN32
    #ifdef UTILS_EXPORTS
        #define UTILS_API __declspec(dllexport)
    #else
        #define UTILS_API __declspec(dllimport)
    #endif
#else
    #define UTILS_API  // Пустое для остальных
#endif

namespace utils{
    UTILS_API int utility_function();
}