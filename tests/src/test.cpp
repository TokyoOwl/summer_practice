#include <iostream>
#include <cassert>
#include "utils.h"
#include "core.h"

namespace tests{
    void base_test(){
        assert(core::base_function() == 1);
        std::cout << "Base function tested: OK" << std::endl;
    } 

    void utility_test(){
        assert(utils::utility_function() == 1);
        std::cout << "Utility function tested: OK" << std::endl;
    } 
}

int main(){
    tests::base_test();
    tests::utility_test();
    std::cin.get();
    return 0;
}