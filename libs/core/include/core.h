#pragma once
#ifdef _WIN32
    #ifdef CORE_EXPORTS
        #define CORE_API __declspec(dllexport)
    #else
        #define CORE_API __declspec(dllimport)
    #endif
#else
    #define CORE_API __attribute__((visibility("default")))
#endif

namespace core{
    CORE_API std::string base_function();
}
