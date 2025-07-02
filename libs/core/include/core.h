#pragma once
#ifdef _WIN32
    #ifdef CORE_EXPORTS
        #define CORE_API __declspec(dllexport)
    #else
        #define CORE_API __declspec(dllimport)
    #endif
#else
    #define CORE_API  // Пустое для остальных
#endif

namespace core{
    CORE_API int base_function();
}
