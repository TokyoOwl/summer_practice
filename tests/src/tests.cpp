#include <iostream>
#include <cassert>
#include <gtest/gtest.h>
#include "test_cout.h"
#include "utils.h"
#include "core.h"

/*namespace tests{
    void test_base(){
        std::cout << core::base_function();
        std::string str = "This is a base function!\n";
        assert(core::base_function() == str);
    } 

    void test_utility(){
        std::cout << utils::utility_function();
        std::string str = "This is an utility function, that calls base_function(): This is a base function!\n";
        assert(utils::utility_function() == str);
    }
}*/
TEST(func_test, base_test)
{
    TEST_COUT << core::base_function();
    std::string str = "This is a base function!\n";
    EXPECT_EQ(str, core::base_function());

}
TEST(func_test, utils_test)
{   
    TEST_COUT << utils::utility_function();
    std::string str = "This is an utility function, that calls base_function(): This is a base function!\n";
    EXPECT_EQ(str, utils::utility_function());
}