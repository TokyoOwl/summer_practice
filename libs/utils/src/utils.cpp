#include <iostream>
#include "utils.h"
#include "core.h"

namespace utils{
    std::string utility_function(){
        return "This is an utility function, that calls base_function(): " + core::base_function();
    }
}