#include <iostream>
#include "utils.h"
#include "core.h"

namespace utils{
    int utility_function(){
        std::cout << "This is an utility function, that calls base_function(): !" << core::base_function() << std::endl;
        return 1;
    }
}