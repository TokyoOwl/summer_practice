#include <iostream>
#include <cassert>
#include "utils.h"
#include "core.h"

namespace tests{
    void test_base(){
        std::cout << core::base_function();
        assert(core::base_function() == "This is a base function!\n");
        std::cout << "Base function tested: OK" << std::endl;
    } 

    void test_utility(){
        std::cout << utils::utility_function();
        std::string str1 = "This is an utility function, that calls base_function(): ";
        std::string str2 = "This is a base function!\n";
        std::string test_str = str1 + str2;
        assert(utils::utility_function() == test_str);
        std::cout << "Utility function tested: OK" << std::endl;
    } 
}

int main(){
    tests::test_base();
    tests::test_utility();
    std::cin.get();
    return 0;
}