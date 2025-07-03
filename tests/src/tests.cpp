#include <iostream>
#include <cassert>
#include "utils.h"
#include "core.h"

namespace tests{
    void test_base(){
        core::base_function();
        assert(core::base_function() == 1);
        std::cout << "Base function tested: OK" << std::endl;
    } 

    void test_utility(){
        utils::utility_function();
        assert(utils::utility_function() == 1);
        std::cout << "Utility function tested: OK" << std::endl;
    } 
}

int main(){
    tests::test_base();
    tests::test_utility();
    std::cin.get();
    return 0;
}